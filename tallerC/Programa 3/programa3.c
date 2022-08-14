/****************************************************
* Fecha: 6-agosto-2022
* Autor: Luis Angel Rodriguez
* Materia: Parallel and Distributed Computing
* Tema: Introducciòn lenguaje de programaciòn C
* Tòpico: Aplicaciòn para encontrar la distancia entre dos puntos
****************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/*Funcion para hallar la distancia de dos punts*/
float distancia(int x1, int x2, int y1, int y2){
	float suma_expone, resul_raiz;
	
	/*Primero se realiza la suma de el resultado de las x,y al cuadrado*/
	suma_expone = pow(x2-x1,2)+pow(y2-y1,2);
	/*Por ultimo se saca la raiz cuadrada del resultado anterior*/
	resul_raiz = sqrt(suma_expone);
	
	return resul_raiz;
}

int main(){
	int x1,x2,y1,y2;
	float mostrar;
		
	printf("===============================================================\n");
	printf("Bienvenido al programa para calcular la distancia de dos puntos");
	printf("\n===============================================================");
	
	printf("\nDigite el valor para x1: ");
	scanf("%i", &x1);
	printf("\nDigite el valor para y1: ");
	scanf("%i", &y1);
	printf("\nDigite el valor para x2: ");
	scanf("%i", &x2);
	printf("\nDigite el valor para y2: ");
	scanf("%i", &y2);
	
	mostrar = distancia(x1,x2,y1,y2);
	printf("\nResultado de la distancia de los dos puntos: %f\n",mostrar);
	
	return 0;
}
