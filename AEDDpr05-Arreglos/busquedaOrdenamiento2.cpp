#include <iostream>
using namespace std;

#define TF 1000

void displayArr(int A[], int TL){
	int i = 0;
	while(i < TL){
		cout << A[i] << " ";
		i++;
	}
	cout << endl;
}
int elimOrdenar(int A[], int & TL, int X){
	int i = 0, j, eliminados = 0;
	
	//eliminar multiplos de X
	while(i < TL){
		if(A[i]%X == 0){
			//se elimina A[i]
			j = i;
			while(j < (TL-1)){
				A[j] = A[j+1];
				j++;
			}
			TL--;
			eliminados++;
		}else{
			i++;
		}
	}
	
	cout << "Luego de eliminar multiplos de X:" << endl;
	displayArr(A, TL);
	
	//ordenar asc
	i = 0;
	while(i < TL){
		int aux, indexMenor = i;
		j = i + 1;
		while(j < TL){
			if(A[j] < A[indexMenor]) indexMenor = j;
			j++;
		}
		
		//intercambiamos valores
		aux = A[i];
		A[i] = A[indexMenor];
		A[indexMenor] = aux;
		i++;
	}
	
	return eliminados;
}
int main(){
	int A[TF] = {12,21,2,10,3,3,3,3,3,7,6,2,4,9,8,0};
	int TL = 16;
	
	cout << "Arreglo original:" << endl;
	displayArr(A, TL);
	
	int eliminados = elimOrdenar(A, TL, 3);
	cout << "Eliminados: " << eliminados << endl;
	cout << "Arreglo Ordenado:" << endl;
	displayArr(A, TL);
	
	return 0;
}
