/**
 * @file GuiaBasica.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
struct Nodo{
    int num;
    struct Nodo* sig;
};
typedef Nodo *Lista;

void crearNodo(int num, Lista &lista){
    Lista aux;
    aux = lista;
    lista = new Nodo;
    lista->num = num;
    lista->sig = aux;
}
void imprimirLista(Nodo* lista){
    if(lista != NULL){
        int i = 0;
        do{
            cout << "El valor del elemento "<<i<<" es: "<<lista->num<<endl;
            i++;
            lista = lista->sig;
        }while(lista != NULL);
    }else cout << "Lista enlazada sin elementos"<<endl;
}
void imprimirListaReverso(Nodo* lista){
    if(lista != NULL){
        int i = 0;
        do{
            cout << "El valor del elemento "<<i<<" es: "<<lista->num<<endl;
            i++;
            lista = lista->sig;
        }while(lista != NULL);
    }else cout << "Lista enlazada sin elementos"<<endl;
}
void 
int main() {
    Lista lista = NULL;//Crear lista vacia

    //crear primer nodo
    crearNodo(5, lista);
    imprimirLista(lista);

    crearNodo(15, lista);
    crearNodo(20, lista);
    crearNodo(3, lista);
    imprimirLista(lista);

    cout << "hhola"<<endl;
    return 0;
}