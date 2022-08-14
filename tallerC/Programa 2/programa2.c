/****************************************************
* Fecha: 6-agosto-2022
* Autor: Luis Angel Rodriguez
* Materia: Parallel and Distributed Computing
* Tema: Introducciòn lenguaje de programaciòn C
* Tòpico: Aplicaciòn para convertir dias a años y semanas a dias
****************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Función para mostrar el resultado de la operación de los días
void mostrar(int años, int semanas, int dias){
	
	printf("años: %i\n", años);
	printf("semanas: %i\n", semanas);
	printf("dias: %i\n", dias);
}

//Función para realizar la operación de conversión
void separar(int dias){
	int resul, dias_final, semanas;
	/*En esta parte se calcularan los años,
	 se divide el numero de dias en 365*/
	resul = dias/365;
	/*Acà se restaran los años convertidos 
	en dias, para sacar las semanas*/
	dias_final = dias-(resul*365);
	semanas = dias_final/7;
	/*Por ultimo se convertiran las semanas 
	en dias y asi se calcularan los dias restantes*/
	dias_final = dias_final-(semanas*7);
	mostrar(resul, semanas, dias_final);
}


/*Funcion para convertir dias a años*/
int main(){
	int dias_ingresar;
	
	printf("================================================================\n");
	printf("Bienvenido al conversor de numero de dias a años, semanas y dias");
	printf("\n================================================================");
	printf("\n Porfavor ingrese el numero de dìas a convertir: ");
	scanf("%i", &dias_ingresar); /*Acà se ingresara el numero de dìas*/
	separar(dias_ingresar);
	
	
	
	return 0;
}


