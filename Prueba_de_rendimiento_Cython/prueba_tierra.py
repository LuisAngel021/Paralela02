"""
Autor: Luis Ángel Rodríguez Calderón
Fecha: 2/11/2022
Tema: Planetas - orbita gravitacional
Principal: llama a ambos programas Cy/Py
La idea principal es crear un ".csv"
"""

import cy_planeta
import py_planeta
import time


""" Ejemplo usando datos del planeta TIERRA"""
""" Datos del planeta por wikipedia"""

#Inicialización planeta para Python
tierraPy = py_planeta.Planet()
tierraPy.x = 100*10**3
tierraPy.y = 300*10**3
tierraPy.z = 700*10**3

tierraPy.vx = 2.000*10**3
tierraPy.vy = 29.87*10**3
tierraPy.vz = 0.034*10**3

tierraPy.m = 5.9742*10**24

""" Datos del planeta por wikipedia"""
#Inicialización planeta para Cython
tierraCy = cy_planeta.Planet()
tierraCy.x = 100*10**3
tierraCy.y = 300*10**3
tierraCy.z = 700*10**3

tierraCy.vx = 2.000*10**3
tierraCy.vy = 29.87*10**3
tierraCy.vz = 0.034*10**3

tierraCy.m = 5.9742*10**24

#Variables adicionales
time_span = 400
n_steps = 200000

#Definición de experimentos
#Reducción del ruido gaussiano

#Se crea un formato para la impresión sobre el fichero
formato_datos = "{:.5f},{:.5f}\n"

for i in range(30):

	#Toma de tiempos para Python
	inicioPy = time.time()
	py_planeta.step_time(tierraPy, time_span, n_steps)
	finalPy = time.time() - inicioPy

	#Toma de tiempos para Cython
	inicioCy = time.time()
	cy_planeta.step_time(tierraCy, time_span, n_steps)
	finalCy = time.time() - inicioCy
	
	with open("tierra.csv","a") as archivo:
		archivo.write(formato_datos.format(finalPy,finalCy))
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

