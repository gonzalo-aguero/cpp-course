#include <iostream>
using namespace std;

void processArray(int v[], int physicalSize);
void eliminarRepetidos(int v[], int tF, int & tL);

//utilities functions
void displayArray(int V[], int tam);
void title(string text);

int main(int argc, char *argv[]) {
	const int N = 10;//physicalSize
	int x[N] = {500, 100, 4500, 200, 300};
	int x2[N] = {5, 5, 5, 5, 5};
	int tL2 = 5;
	
	title("Ejercio de Listas N°1");
	cout << "Arreglo Original (incluyendo posiciones no utilizadas):" << endl;
	displayArray(x, N);	
	cout << "\nArreglo luego de ser procesado:" << endl;
	processArray(x, N);
	
	title("Ejercio de Listas N°2");
	cout << "Arreglo Original (incluyendo posiciones no utilizadas):" << endl;
	displayArray(x2, N);	
	eliminarRepetidos(x2, N, tL2);
	cout << "\nArreglo luego de ser procesado:" << endl;
	displayArray(x2, N);	
	
	return 0;
}

void processArray(int v[], int physicalSize){
	int i = 0, insertados = 0;
	
	while(i < physicalSize){
		if(v[i]%100 == 0 && v[i] != 0){//es multiplo de 100
			int j = physicalSize-1;
			int aux;
			while(j > i){
				v[j] = v[j-1];
				j--;
			}
			
			if(i < (physicalSize -2)) v[i+1] = v[i] + 1;
			else v[physicalSize-1] = v[i] + 1;
			insertados++;
		}
		i++;
	}
	
	displayArray(v, physicalSize);
	cout << "Elementos insertados: " << insertados << endl;
}

void displayArray(int V[], int tam){
	int i = 0;
	while(i < tam){
		cout << V[i] << " ";
		i++;
	}
	cout << endl;
}
	
void title(string text){
	cout 
		<< "============================ "
		<< text
		<< " ============================"
		<< endl;
}


float promedio(int v[], int tL){
	int i = 0;
	float sum = 0;
	while(i < tL){
		sum += v[i];
		i++;
	}
	
	return sum / tL;
}
void removeAt(int v[], int & tL, int index){
	int i = index;
	while(i < tL){
		v[i] = v[i+1];
		i++;
	}
	tL--;
}
void eliminarRepetidos(int v[], int tF, int & tL){
	int i = 0, j, paresEliminados = 0;
	
	while(i < tF){
		j = i+1;
		while(j < tL){
			if(v[i] == v[j]){
				//el valor se repite, por lo tanto se elimina.
				if(v[j]%2 == 0) paresEliminados++;
				removeAt(v, tL, j);
			}
			j++;
		}
		i++;
	}
	
	cout << "Elementos Pares eliminados: " << paresEliminados << endl;
	cout << "Promedio de elementos restantes: " << promedio(v, tL);
}
