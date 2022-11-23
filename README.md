# Paralela02

<h2> Primer taller de C</h2>

Para ejecutar cada ejercicio se debe poner en un archivo de texto con la extensión .c
Una vez copiado y pegado el codigo, se debe de abrir una terminal en el sistema operativo Ubuntu
se debe de acceder a la ubicación del archivo de texto con la extensión .c y ahi se compilara
con el comando 'gcc' <nombre del archivo.c> y después se ejecutara con './a.out' y ahi se ejecutara el archivo.

<h2>Trabajo Python/Cython</h2>

* Para la ejecución del programa, se debe realizar un make all, para que se compile el programa. Posteriormente, se ejecutara el comando python3 prueba_tierra.py, y se generará un archivo en formato csv, que contendra los tiempos de ejecución del programa en el lenguaje Python y Cython

Esto se hace con el fin de verificar la optimización del código, pasando del lenguaje de programación Python, que es un lenguaje interpretado, a Cython, que es la combinación de C con Python, esto nos permite ganar más rendimiento al momento de compilar un programa y hará que este sea más optimo.

<h2>Programas de prueba</h2>

* En este apartado se encuentran los programas que se utilizaron para realizar la comparativa entre el lenguaje Python y Cython.
* Cada programa tiene su respectiva carpeta y Makefile para su compilación. Para poder compilar cualquier programa, se debe de descargar el archivo, entrar a la carpeta y desde la terminal escribir el comando python3 (nombre de la bateria de experimentos).py. De esta forma se crearán los archivos .csv con los tiempos de cada ejecución por parte de ambos lenguajes.
* Si desea comparar los tiempos y que no se generen archivos .csv, se ejecutará el comando python3 performance.py, el cual le dira que lenguaje es más rapido y la diferencia de tiempos de estos.
