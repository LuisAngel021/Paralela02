"""Fichero para la creacion de la bateria de experimentos"""
import time
import py_puerto
import cy_puerto


formato_datos="{:.9f}\n"

"""Se crea la bateria de experimentos"""
for i in range(30):
	inicioPy=time.time()
	py_puerto.py_get_puerto()
	finalPy=time.time()-inicioPy


	with open("puertoPy.csv","a") as archivo:
		archivo.write(formato_datos.format(finalPy))

for i in range(30):

	inicioCy=time.time()
	cy_puerto.cy_get_puerto()
	finalCy=time.time()-inicioCy

	with open("puertoCy.csv","a") as archivo:
		archivo.write(formato_datos.format(finalCy))
