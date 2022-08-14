/****************************************************
* Fecha: 6-agosto-2022
* Autor: Luis Angel Rodriguez
* Materia: Parallel and Distributed Computing
* Tema: Introducciòn lenguaje de programaciòn C
* Tòpico: Aplicaciòn para mostrar un patron como triangulo rectangulo
* usando un asterisco, el maximo de lineas es 14
****************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Funcion para formar el triangulo rectangulo de *
void piramide(int lineas){

	for(int i=1; i<=lineas; i++)
		{
		
			for(int j=0; j<i; j++)
			{
				printf("*");
			}
			printf("\n");
		}

}

int main(){
	
	int lineas;
	printf("Bienvenido, digite las lineas que desea mostrar en patron: ");
	scanf("%i", &lineas);
	if(lineas>0 && lineas<=14)
	{
		piramide(lineas);
	}
	else{
		printf("\nHa ingresado un numero de lineas invalido\n");
		main();
	}


	return 0;
}
