#include <iostream>
using namespace std;
#define TF 25

//0 1 1 1 1 1 1 2 0 2 2 2 2 2 1 1 1 2 2 2 1 2 1 2

int cantidadRepetidos(int V[]){
	int i = 0, j, repetidos = 0, contador;
	bool evaluados[TF] = {}; // índices ya evaluados
	
	while(i < TF){
		if(!evaluados[i]){
			contador = 1;
			j = i + 1;
			
			while(j < TF){
				if(V[j] == V[i]){
					contador++;
					evaluados[j] = true;
				}
				j++;
			}
			
			if(contador > 10) repetidos++;
			evaluados[i] = true;
		}
		i++;
	}
	return repetidos;
}
int main(int argc, char *argv[]) {
	int V[TF];
	int i = 0;
	
	while(i < TF){
		cin >> V[i];
		i++;
	}
	
	cout << "Cantidad de elementos que se repiten más de 10 veces: "
		<< cantidadRepetidos(V) << endl;
	
	return 0;
}

