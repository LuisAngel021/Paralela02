S/****************************************************
* Fecha: 6-agosto-2022
* Autor: Luis Angel Rodriguez
* Materia: Parallel and Distributed Computing
* Tema: Introducciòn lenguaje de programaciòn C
* Tòpico: Aplicaciòn de dos valores para obtener su producto
****************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/****** Funciòn calcular producto ********/

int calcular(int numero1, int numero2){
	int calculo;
	
	calculo = numero1*numero2;
	
	return calculo;
}
/*Funcion principal*/
int main(){
	int numero1, numero2, resul;
	printf("=======Bienvenido usuario========\n");
	printf("Digite el primer numero a operar: ");
	scanf("%i", &numero1);
	printf("Digite el segundo numero a operar: ");
	scanf("%i", &numero2);
	resul = calcular(numero1,numero2);
	
	printf("\nEl resultado de la multiplicacion es: %i\n",resul);
	
return 0;
}

