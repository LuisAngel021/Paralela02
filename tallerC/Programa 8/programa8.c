/****************************************************
* Fecha: 6-agosto-2022
* Autor: Luis Angel Rodriguez
* Materia: Parallel and Distributed Computing
* Tema: Introducciòn lenguaje de programaciòn C
* Tòpico: Aplicaciòn para crear una matriz del tamaño que
* que el usuario decida y posteriormente llenarse de numeros aleatorios.
****************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Funcion para mostrar la matriz 1 y 2
//Además de mostrar el resultado de la 
//suma de estas.
void mostrar_matriz(int N, int matriz[]){
	
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			printf(" %d", matriz[i+j*N]);
			
		}
		printf("\n");
	}
}

//Funcion que toma dos matrices y las suma
void suma_matriz(int N, int matriz[], int matriz2[]){
	int size=N*N;
	int matriz_resultado[size]; 
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
		matriz_resultado[i+j*N] = matriz[i+j*N] + matriz2[i+j*N];
		}
	} 
	printf("\nMatriz 1: \n");
	mostrar_matriz(N, matriz);
	printf("\nMatriz 2: \n");
	mostrar_matriz(N, matriz2);
	printf("\nResultado de la suma de la matriz 1 y matriz 2: \n");
	mostrar_matriz(N, matriz_resultado);


}

//Funcion para llenar las dos matrices de numeros aleatorios
void llenar_matriz(int N, int matriz[], int matriz2[]){
	
	for(int i=0; i<N; i++){
	int numero=0;
		for(int j=0; j<N; j++){
			numero = rand() % 10;
			matriz[i+j*N]=numero;
			matriz2[i+j*N]=numero;
		}
	}
	suma_matriz(N, matriz, matriz2);
	
}



int main(){
	
	int size, N;
	printf("Bienvenido usuario, digite el tamaño de la matriz: ");
	scanf("%i", &N);
	
	//Inicializar la matriz
	size = N*N;
	int matriz[size], matriz2[size];
	if(N<8 && N>0){
		llenar_matriz(N, matriz, matriz2);
	}
	else{
		printf("\nEl valor de la matriz no puede ser mayor que 8 ni menor a 0\n");
	}




	return 0;
}
