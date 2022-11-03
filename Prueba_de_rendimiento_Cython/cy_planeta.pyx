#cython: languaje_level=3

cimport cython

#Autor: Luis Ángel Rodríguez Calderón
#Fecha: 27/10/2022
#Tema: evaluar el rendimiento de un programa en Cython

"""
Función externa para el cálculo de la raiz
"""

cdef extern from "math.h": 
	double sqrt(double x) nogil
		
cdef class Planet(object):
	"""Declaración tipo de datos pública"""
	cdef public double x,y,z,vx,vy,vz,m
	
	
	def __init__(self):
		
		self.x = 1.0
		self.y = 0.0
		self.z = 0.0
		self.vx = 0.0
		self.vy = 0.5
		self.vz = 0.0
		self.m = 1.0
		
"""
¿Qué pasa si distance = 0?
Se usara un decorador de Cython, para evitar la división sobre cero
y no sea costo computacional
"""
		
@cython.cdivision(True)
cdef void single_step(Planet planet,float dt) nogil:
	"""Declaración variables"""
		
	cdef double distance,Fx,Fy,Fz
	distance = sqrt(planet.x**2 + planet.y**2  + planet.z**2)
	
	Fx = -planet.x/ distance**3
	Fy = -planet.y/ distance**3
	Fz = -planet.z/ distance**3
	
	planet.x += dt*planet.vx
	planet.y += dt*planet.vy
	planet.z += dt*planet.vz
	
	planet.vx += dt * Fx / planet.m
	planet.vy += dt * Fy / planet.m
	planet.vz += dt * Fz / planet.m

def step_time(Planet planet, float time_span,int n_steps):
	cdef float dt
	cdef int j
	dt = time_span / n_steps
	"""Habilitar posibilidad de paralelismo"""
	with nogil:
		for j in range(n_steps):
			single_step(planet,dt)
