#include <iostream>
using namespace std;

double promedioProcesamiento(int T[], int & TL, int indice){
	if(indice == 0){
		/**
		 * Primer elemento, al cual se le suma la sumatoria de todos
		 * los demas y luego se lo divide por la cantidad de elementos. 
		 **/
		return (T[indice] + promedioProcesamiento(T, TL, indice+1)) / TL;
	}
	
	if(indice == (TL-1)){
		/**
		 * �LTIMO elemento, donde se devuelve directamente su valor
		 * y donde comienza la operaci�n en reversa.
		 * De aqu� comienza a cerrarse el "ciclo de recursividad"...
		 **/
		return TL[indice];
	}
	
	/**
	 * Para todos los elementos que est�n entre el primero y el �ltimo
	 **/
	return (T[indice] + promedioProcesamiento(T, TL, indice+1);
}
int main(int argc, char *argv[]) {
	int x;
	
	
	do{
		cout << "Ingrese X: ";
		cin  >> x;
	} while(!(x>=0 && x<=10000));
	
	
	cout << "El valor X es: " << x << endl;
	return 0;
}

