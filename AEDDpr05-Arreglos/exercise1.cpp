#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

void inicializar_teclado(int V[], int tam);
void displayArray(int V[], int tam);
void displayArray(float V[], int tam);
void inicializar_aleatorio(int V[], int tam); 
int mayor(int A[ ],int inf, int sup);
int menor(int A[],int inf, int sup);
void normalizeVector(float V[], int tam);

int main(int argc, char *argv[]) {
	const int N = 5;
	
	int array[N];
	float realArray[N] = {4, 5, 8, 10, 2};
	
//	cout << "Inicializando por teclado:" << endl;
//	inicializar_teclado(array, N);
//	cout << "Resultado: ";
//	displayArray(array, N);
//	cout << endl;
	cout 
		<< "\n--------------- EXERCISE 3 ---------------" << endl
		<< "Inicializando aleatoriamente:" << endl;
	inicializar_aleatorio(array, N);
	
	cout 
		<< "\n--------------- EXERCISE 2 ---------------" << endl
		<< "Resultado: ";
	displayArray(array, N);
	cout << endl;
	
	cout 
		<< "\n--------------- EXERCISE 3 ---------------" << endl
		<< "El mayor en el rango [0,3] es: " << mayor(array, 0, 3) << endl;
	
	cout 
		<< "\n--------------- EXERCISE 4 ---------------" << endl;
	displayArray(realArray, N);
	normalizeVector(realArray, N);
	displayArray(realArray, N);
	
	return 0;
}

void inicializar_teclado(int V[], int tam){
	int i = 0;
	while(i < tam){
		cin >> V[i];
		i++;
	}
}
	

void displayArray(int V[], int tam){
	int i = 0;
	while(i < tam){
		cout << V[i] << " ";
		i++;
	}
	cout << endl;
}
void displayArray(float V[], int tam){
	int i = 0;
	while(i < tam){
		cout << V[i] << " ";
		i++;
	}
	cout << endl;
}

void inicializar_aleatorio(int V[], int tam){
	int i = 0;
	srand(time(NULL));
	
	while(i < tam){
		V[i] = rand() % 100 +1;
		i++;
	}
}

int mayor(int A[],int inf, int sup){
	int higher, i = inf;
	bool higherIsDefined = false;
	
	while(i <= sup){//it includes the "sup" number.
		const int elem = A[i];
		
		if(inf <= i && i <= sup){
			if(!higherIsDefined){
				higher = elem;
				higherIsDefined = true;
			}else if(elem > higher) higher = elem;
		}
		i++;
	}
	
	return higher;
}

int menor(int A[],int inf, int sup){
	int lower, i = inf;
	bool lowerIsDefined = false;
	
	while(i <= sup){//it includes the "sup" number.
		const int elem = A[i];
		
		if(inf <= i && i <= sup){
			if(!lowerIsDefined){
				lower = elem;
				lowerIsDefined = true;
			}else if(elem > lower) lower = elem;
		}
		i++;
	}
	
	return lower;
}

void normalizeVector(float V[], int tam){
	int i = 1;
	float Min = V[0], Max = V[0];
	
	while(i < tam){
		if(V[i] < Min) Min = V[i];
		else if(V[i] > Max) Max = V[i];
		i++;
	}
	
	i = 0;
	while(i < tam){
		V[i] = ((V[i] - Min) / (Max - Min)) * 100;
		i++;
	}
}
