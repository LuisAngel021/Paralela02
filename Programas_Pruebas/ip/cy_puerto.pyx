#cython: language_level=3

cimport cython

import socket

def cy_get_puerto():
	"""Se adquiere el nombre del equipo"""
	cdef str hostname=socket.gethostname()
	"""Se adquiere la ip del equipo """
	cdef str objetivo=socket.gethostbyname(hostname)
	"""Se verifica hasta el puerto 500 si hay alguno que este abierto"""
	
	""" de lo contrario termina el proceso """
	try:
		for port in range(1,500):
			s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
			socket.setdefaulttime(1)
			resultado=s.connect_ex((objetivo,port))
			if resultado==0:
				print('El puerto:', port, 'esta abierto')
			s.close()
	except:
		print('saliendo')
		
			
