#Fichero para la prueba y comparativa rendimiento

import time
import py_pass
import cy_pass

encontrada=0
input_hash= 'c893bad68927b457dbed39460e6afd62'
pass_doc='dic.txt'

init_time=time.time()
print('Calculo con python ',py_pass.py_deco(encontrada,input_hash,pass_doc))
fin_time=time.time()
total_time_python=fin_time-init_time
print("Tiempo total con python ",total_time_python)

init_time=time.time()
print('Calculo con cython ',cy_pass.cy_deco(encontrada,input_hash,pass_doc))
fin_time=time.time()
total_time_cython=fin_time-init_time
print("Tiempo total con cython ",total_time_cython)

print(f'cython es {total_time_python/total_time_cython} veces mas rapido que Python')
