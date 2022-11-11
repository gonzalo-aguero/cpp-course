/**
 * @file Ejercicio4.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-10
 * Ejercicio 4:
    a) Declarar los tipos de datos necesarios para almacenar una lista secuencial enlazada cuyos nodos
    contienen la siguiente información:
    ₋ Una cadena de caracteres con el nombre de una ciudad.
    ₋ Las coordenadas X e Y de dicha ciudad en el plano.
    ₋ Un número de registración que se asigna aleatoriamente.
    b) Escribir funciones que reciban la lista y permitan:
    ₋ Informar el nombre de la ciudad con el número de registro más bajo.
    ₋ Informar si la lista está ordenada alfabéticamente por nombre de ciudad.
    ₋ Eliminar de la lista todas las ciudades que tengan ordenada en el plano menor que 0.
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
struct  Coordenada{
    int x;
    int y;
};
struct Ciudad{
    string nombre;
    Coordenada pos;
    int numReg;
};

struct Nodo{
    Ciudad info;
    Nodo* sig;
};
typedef Nodo* Lista;
typedef Nodo* PtrNodo;

PtrNodo CrearNodo(Ciudad c){
    PtrNodo ret = new Nodo;
    ret->info = c;
    ret->sig = NULL;
    return ret;
}
void insertarFinal(Lista &lista, PtrNodo nuevo){
	if(lista==NULL){
		lista=nuevo;
	}
	else{
		Lista aux=lista;
		while(aux->sig!=NULL){
			aux=aux->sig;
		}
		aux->sig = nuevo;
	}
}
void mostrar(Lista L){
	// while(L!=NULL){
        cout << L->info.nombre<<endl;
        
		// L=L->sig;
	// }
}
void regMasBajo(){

}
int main(int argc, char const *argv[]){
    Lista ListaCiudades = NULL;
	Ciudad c1;
	int cant;
	
	cout<<"Ingrese la cantidad de ciudades que desea almacenar."<<endl;
	cin >> cant;
	for(int i=0;i<cant;i++) {
        cin >> c1.nombre;
		PtrNodo puntero = CrearNodo(c1);
		insertarFinal(ListaCiudades, puntero);
	}
	mostrar(ListaCiudades);
    return 0;
}
