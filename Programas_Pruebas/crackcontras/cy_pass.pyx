#cython: language_level=3

cimport cython
import hashlib

"""Funcion que decodifica la plabra que se le pasa"""
def cy_deco(int encontrada, str input_hash,str pass_doc):
    """Se le pasa el archivo txt que contiene las palabras"""
    """Si el archivo no existe no deja continuar el programa"""
    try:
        pass_file=open(pass_doc,'r')
    except:
        print('Error:'+pass_doc+' no ha sido encontrada')

    """Para cada palabra del txt se codifica y se usa la 
    libreria hash para codificar en md5"""
    for palabra in pass_file:
        palabra_cifrada=palabra.encode('utf-8')
        palabra_hasheada=hashlib.md5(palabra_cifrada.strip())
        digest=palabra_hasheada.hexdigest()
		
        """Si la palabra codificada es la misma a la que se
        le paso, es encontrada y cierra el ciclo"""
        if digest==input_hash:
            print('Palabra encontrada, la clave es: ', palabra)
            encontrada=1
            break

        if not encontrada:
            print('Pass no encontrada en el archivo', pass_doc)
