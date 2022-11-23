"""Fichero para la creacion de la bateria de experimentos"""
import time
import py_hexadecimal
import cy_hexadecimal

decimal=1584859898

formato_datos="{:.9f}\n"

"""Se crea la bateria de experimentos"""
for i in range(30):
	inicioPy=time.time()
	py_hexadecimal.decimal_a_hexadecimal(decimal)
	finalPy=time.time()-inicioPy

	with open("convertidorPy.csv","a") as archivo:
		archivo.write(formato_datos.format(finalPy))

for i in range(30):

	inicioCy=time.time()
	cy_hexadecimal.iniciar(decimal)
	finalCy=time.time()-inicioCy

	with open("convertidorCy.csv","a") as archivo:
		archivo.write(formato_datos.format(finalCy))

