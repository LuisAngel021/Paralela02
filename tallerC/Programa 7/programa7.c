/****************************************************
* Fecha: 6-agosto-2022
* Autor: Luis Angel Rodriguez
* Materia: Parallel and Distributed Computing
* Tema: Introducciòn lenguaje de programaciòn C
* Tòpico: Aplicaciòn para crear una matriz del tamaño que
* que el usuario decida (menor a 8) y posteriormente 
* llenarse de numeros aleatorios.
****************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Funcion para mostrar la matriz llena de numeros aleatorios
void mostrar_matriz(int N, int matriz[]){
	
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			printf(" %d", matriz[i+j*N]);
			
		}
		printf("\n");
	}
}

//Funcion para llenar la matriz de numeros aleatorios
void llenar_matriz(int N, int matriz[]){
	
	for(int i=0; i<N; i++){
	int numero=0;
		for(int j=0; j<N; j++){
		//la funcion rand() permite obtener numeros aleatorios
			numero = rand() % 10;
			matriz[i+j*N]=numero;
		}
	}
	
	mostrar_matriz(N, matriz);
}


int main(){
	
	int size, N;
	printf("Bienvenido usuario, digite el tamaño de la matriz: ");
	scanf("%i", &N);
	
	//Inicializar la matriz
	size = N*N;
	int matriz[size];
	if(N<8 && N>0){
		llenar_matriz(N, matriz);
	}
	else{
		printf("\nEl valor de la matriz no puede ser mayor que 8 ni menor a 0\n");
	}




	return 0;
}
