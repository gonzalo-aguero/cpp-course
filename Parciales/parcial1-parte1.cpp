#include <iostream>
using namespace std;

//funciones desarrolladas para no hacer el codigo demasiado engorroso.
bool todos_distintos(int V[], int tam);
int menor(int v[], int tam);
int mayor(int v[], int tam);

// codifique completamente la funcionA aquí
int funcionA(int x, int y){
	int num = x, multiplosPares = 0;
	while(num <= y){
		if(num%5 == 0 && num%2 == 0) multiplosPares++;
		num++;
	}
	
	return multiplosPares;
}
	
int main(int argc, char *argv[]) {
	// declare las variables necesarias aquí...
	const int N = 4;
	int valores[N];
	
	// codifique el ingreso de datos del problema aquí...
	do{
		for(int i = 0; i < N; i++)
			cin >> valores[i];
	}while(!todos_distintos(valores, N));
	
	// llamada a funcion y visualización de resultados aquí...
	cout << funcionA(menor(valores, N), mayor(valores, N)) << endl;
	return 0;
}

bool todos_distintos(int V[], int tam){
	int i = 0, j, current, distintos = true;
	while(i < tam){
		current = V[i];//current element
		j = i+1;
		while(j < tam){
			if(V[j] == current){
				distintos = false;
				break;
			}
			j++;
		}
		i++;
	}
	
	return distintos;
}
	
	
int menor(int v[], int tam){
	int i = 1, menor = v[0];
	while(i < tam){
		if(v[i] < menor) menor = v[i];
		i++;
	}
	return menor;
}	
int mayor(int v[], int tam){
	int i = 1, mayor = v[0];
	while(i < tam){
		if(v[i] > mayor) mayor = v[i];
		i++;
	}
	return mayor;
}
