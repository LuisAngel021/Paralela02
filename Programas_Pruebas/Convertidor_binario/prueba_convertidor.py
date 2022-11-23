"""Fichero para la creacion de la bateria de experimentos"""
import time
import py_convertidor
import cy_convertidor

decimal=45641841819848911871414181711156415

formato_datos="{:.5f}\n"

"""Se crea la bateria de experimentos"""
for i in range(30):
	inicioPy=time.time()
	py_convertidor.py_binario(decimal)
	finalPy=time.time()-inicioPy

	with open("convertidorPy.csv","a") as archivo:
		archivo.write(formato_datos.format(finalPy))

for i in range(30):

	inicioCy=time.time()
	cy_convertidor.cy_binario(decimal)
	finalCy=time.time()-inicioCy

	with open("convertidorCy.csv","a") as archivo:
		archivo.write(formato_datos.format(finalCy))

