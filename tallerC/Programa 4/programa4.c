/****************************************************
* Fecha: 6-agosto-2022
* Autor: Luis Angel Rodriguez
* Materia: Parallel and Distributed Computing
* Tema: Introducciòn lenguaje de programaciòn C
* Tòpico: Aplicaciòn para mostrar los primeros 10 numeros naturales
****************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	//Se crea un ciclo repetitivo para mostrar
	//los numeros naturales de los numeros del 1 al 10
	int i;
	for( i=1; i<=10; i++){
		printf("\nLos numeros son: %i\n", i);
	}


	return 0;
}
