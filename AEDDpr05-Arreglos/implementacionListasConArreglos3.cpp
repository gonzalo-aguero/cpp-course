/**
 * Este programa fue diseñado y desarrollado inicialmente en papel.
 * Aquí simplemente está la copia tal cual con el objetivo de probar
 * el correcto funcionamiento del código.
 **/

#include <iostream>
using namespace std;

#define TF 20

void func(int V[], int & TL); // funcion solicitada en el ejercicio
void eliminar(int index, int V[], int & TL); // funcion auxiliar para eliminar los elementos del array

int main(){
	int TL = 10, i = 0;
	int V[TF];
	
	while(i < TL){
		cin >> V[i];
		i++;
	}
	
	func(V, TL);
	
	return 0;
}
void func(int V[], int & TL){
	int i = 0, eliminados = 0, mayDif = 0, dif;
	
	while(i < TL){
		if(V[i]%2 != 0 && i > 0 && i < (TL-1)){
			if(V[i-1]%2 == 0 && V[i+1]%2 == 0){
				eliminar(i, V, TL);
				eliminados++;
			}
		}
		i++;
	}
	
	i = 0;
	/* Se itera hasta "TL-1" (sin incluirlo) ya que por cada iteración se evaluarán el valor
	 * con índice "i" y el siguiente a él ("i+1"). Por lo tanto, el último
	 * elemento será evaluado cuando "i" sea igual a una unidad menos que su
	 * índice, es decir, cuando "i == (TL-1)-1" o "i < (TL-1)".
	 **/
	while(i < (TL-1)){
		if(V[i]%2 == 0 && V[i+1]%2 == 0){
			if(V[i] > V[i+1]) dif = V[i] - V[i+1];
			else dif = V[i+1] - V[i];
			if(dif > mayDif) mayDif = dif;
		}
		i++;
	}
	
	cout << "T = " << TL << endl;
	cout << "Cantidad de elementos impares eliminados: "
		<< eliminados << endl;
	cout << "Mayor diferencia entre dos pares sucesivos: "
		<< mayDif << endl;
}
void eliminar(int index, int V[], int & TL){
	int i = index;
	while(i < (TL-1)){
		V[i] = V[i+1];
		i++;
	}
	TL--;
}
