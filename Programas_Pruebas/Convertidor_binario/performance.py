#Fichero para la prueba y comparativa rendimiento

import time
import py_convertidor
import cy_convertidor

decimal=45641841819848911871414181711156415


init_time=time.time()
print('Calculo con python ',py_convertidor.py_binario(decimal))
fin_time=time.time()
total_time_python=fin_time-init_time
print("Tiempo total con python ",total_time_python)

init_time=time.time()
print('Calculo con cython ',cy_convertidor.cy_binario(decimal))
fin_time=time.time()
total_time_cython=fin_time-init_time
print("Tiempo total con cython ",total_time_cython)

print(f'cython es {total_time_python/total_time_cython} veces mas rapido que Python')

