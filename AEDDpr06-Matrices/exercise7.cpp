/**
 * @file exercise7.cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @version 0.1
 * @date 2022-09-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * Escribir un programa que llene con una secuencia ordenada de números iniciada en 1,
 * una matriz de afuera, comenzando desde el elemento (0,0) hacia adentro en forma de espiral.
 */
#include <iostream>
#define FILAS 6
#define COLUMNAS 6
using namespace std;

int main(int argc, char *argv[]) {
	int M[FILAS][COLUMNAS] = {}, contador = 1;
	
	for(int i=0; i< FILAS/2 ;i++) { 
		for(int j=i; j < FILAS-i; j++) { M[i][j] = contador++; }
		
		for(int j = i+1; j < FILAS-i; j++) { M[j][FILAS-1-i] = contador++; }
		
		for(int j = FILAS-2-i; j >= i; j--) { M[FILAS-1-i][j] = contador++; }
		
		for(int j = FILAS-2-i; j > i; j--) { M[j][i] = contador++; }
	}
	
	
	for(int i=0;i<FILAS;i++) { 
		for(int j=0;j<COLUMNAS;j++) { 
			if(M[i][j] > 9)
				cout << M[i][j] << " ";
			else
				cout << M[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}
