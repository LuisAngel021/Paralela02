#Fichero para la prueba y comparativa rendimiento

import time
import py_hexadecimal
import cy_hexadecimal

decimal=153333244345


init_time=time.time()
print('Calculo con python ',py_hexadecimal.decimal_a_hexadecimal(decimal))
fin_time=time.time()
total_time_python=fin_time-init_time
print("Tiempo total con python ",total_time_python)

init_time=time.time()
print('Calculo con cython ',cy_hexadecimal.iniciar(decimal))
fin_time=time.time()
total_time_cython=fin_time-init_time
print("Tiempo total con cython ",total_time_cython)

print(f'cython es {total_time_python/total_time_cython} veces mas rapido que Python')

