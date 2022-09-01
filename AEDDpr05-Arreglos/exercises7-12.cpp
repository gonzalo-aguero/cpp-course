#include <iostream>
using namespace std;

bool todos_iguales(int V[], int tam);//ejercicio 7
bool todos_distintos(int V[], int tam);//ejercicio 8
void intercambiar(int V[], int tam, int valueA, int valueB);//ejercicio 9
void rotar_izq(int v[], int tam);//ejercicio 10
void rotar_der(int v[], int tam);//ejercicio 11
void quini6(int playerID, int playerNums[6], int resultNums[6]);//ejercicio 12

//utilities functions
void displayArray(int V[], int tam);
void title(string text);

int main(int argc, char *argv[]) {
	const int N = 5;
	int X[5] = {6, 2, 1, 5, 3};
	displayArray(X, N);
	
	title("Ejercicio 7");
	cout << "Todos Iguales: " << todos_iguales(X, N) << endl;
	
	title("Ejercicio 8");
	cout << "Todos Distintos: " << todos_distintos(X, N) << endl;
	
	title("Ejercicio 9");
	intercambiar(X, N, 3, 6);
	displayArray(X, N);
	
	title("Ejercicio 10");
	rotar_izq(X, N);
	displayArray(X, N);
	
	title("Ejercicio 11");
	rotar_der(X, N);
	displayArray(X, N);
	
	title("Ejercicio 11");
	int playerNums[] = {00, 22, 40, 45, 32, 10},
		resultNums[] = {00, 22, 40, 45, 32, 10};
	quini6(48850, playerNums, resultNums);
	return 0;
}

bool todos_iguales(int V[], int tam){
	int i = 1, ant = V[0], iguales = true;
	while(i < tam){
		if(V[i] != ant){
			iguales = false;
			break;
		}
		i++;
	}
	
	return iguales;
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

void intercambiar(int V[], int tam, int valueA, int valueB){
	int i = 0, posA = -1, posB = -1;
	while(i < tam){
		if(V[i] == valueA) posA = i;
		if(V[i] == valueB) posB = i;
		i++;
	}
	
	if(posA != -1 && posB != -1){
		int aux = V[posA];
		V[posA] = V[posB];
		V[posB] = aux;
	}else{
		cout << "Los elementos no están en el arreglo." << endl;
	}
	
}
	
void rotar_izq(int v[], int tam){
	int i = 0, aux = v[0];//first element
	
	while(i < tam){
		v[i] = v[i+1];
		i++;
	}
	
	//old first element now is the last element.
	v[tam-1] = aux;
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
	
void rotar_der(int v[], int tam){
	int i = (tam-1), aux = v[tam-1];//first element
	
	while(i > -1){
		v[i] = v[i-1];
		i--;
	}
	
	//old first element now is the last element.
	v[0] = aux;
}
	
void quini6(int playerID, int playerNums[6], int resultNums[6]){
	bool win = true;
	int i = 0;
	while(i < 6){
		if(playerNums[i] != resultNums[i]) win = false;
		i++;
	}
	
	if(win) cout << "Jugador Ganador: ID=" << playerID << endl;
	else cout << "No es ganador :(" << endl;
}
