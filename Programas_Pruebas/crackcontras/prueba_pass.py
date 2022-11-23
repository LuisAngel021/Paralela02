import py_pass
import cy_pass
import time


encontrada=0
input_hash= 'c893bad68927b457dbed39460e6afd62'
pass_doc='dic.txt'

formato_datos="{:.5f}\n"


for i in range(30):
	inicioPy=time.time()
	py_pass.py_deco(encontrada,input_hash,pass_doc)
	finalPy=time.time()-inicioPy

	with open("decodificadorPy.csv","a") as archivo:
		archivo.write(formato_datos.format(finalPy))

for i in range(30):

	inicioCy=time.time()
	cy_pass.cy_deco(encontrada,input_hash,pass_doc)
	finalCy=time.time()-inicioCy

	with open("decodificadorCy.csv","a") as archivo:
		archivo.write(formato_datos.format(finalCy))
