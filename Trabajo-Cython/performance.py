# Fichero de prueba
# y comparativa de rendimiento
# Solo phyton, con cython
import time
import py_planeta
import cy_planeta

#-----------------------Calculo de Python
init_time = time.time()
plan = py_planeta.Planet()
plan.step_time(plan,20,20)
fin_time = time.time()
total_time_python = fin_time - init_time
print("Tiempo total de Python", total_time_python)

#-----------------------Calculo de Cython
init_time = time.time()
plan = cy_planeta.Planet()
plan.step_time(plan,20,20)
fin_time = time.time()
fin_time = time.time()
total_time_cython = fin_time - init_time
print("Tiempo total de Cython", total_time_cython)

#-----------------------Comparativa
print(f"Cython es {total_time_python/total_time_cython} veces más rápido que Python")
