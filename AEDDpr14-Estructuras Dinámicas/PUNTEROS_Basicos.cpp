#include <iostream>
using namespace std;

struct Nodo {
	int info;
	struct Nodo * sig;
};
typedef Nodo* PNodo;
typedef Nodo* Lista;

PNodo nuevoNodo(int valor){
	PNodo lista=NULL;
	lista=new Nodo;
	lista->info=valor;
	lista->sig=NULL;
	return lista;

}
	bool vacia(PNodo lista){
		return lista==NULL;
	}
void imprimir(PNodo lista){
	if(!vacia(lista)){
	PNodo aux=lista;
	while(aux->sig != NULL){
		cout<<aux->info<<endl;
		aux=aux->sig;
		
	}
	cout<<aux->info<<endl;
	}else{
		cout<<"Error, puntero vac�o"<<endl;
	}
	
	return;
}

void imprimirReverso(PNodo lista){
	if(!vacia(lista)){
		PNodo aux=lista;
		PNodo temporal=NULL;
		while(aux->sig != NULL){
			aux=aux->sig;
			if(aux->sig == temporal){
				cout<<aux->info<<endl;
				temporal=aux;
				aux=lista;
			}
			
			
		}
		cout<<lista->info<<endl;
	}else{
			cout<<"El puntero est� vac�o"<<endl;
		}
	return;
}

void insertarAlPrincipio(PNodo lista, int valor){
	PNodo aux;
	aux=lista;
	lista=new Nodo;
	lista->info=valor;
	lista->sig=aux;
}

void insertarAlFinal(PNodo lista, int valor){
	PNodo aux=lista;
	
	while(aux->sig != NULL){
		aux=aux->sig;
	}
	aux->sig=nuevoNodo(valor);
}



int main(int argc, char *argv[]) {
	
int nuevo=7;
Nodo* Ptr;
PNodo vacia=NULL;
Ptr=nuevoNodo(nuevo);
insertarAlFinal(Ptr, 6);
insertarAlFinal(Ptr, 2);
insertarAlFinal(Ptr, 8);
insertarAlFinal(Ptr, 16);
cout<<"Tratando de imprimir una lista vacia"<<endl;
imprimir(vacia);
cout<<"Imprimir una lista"<<endl;
imprimir(Ptr);
cout<<"Imprimir una lista en reverso"<<endl;
imprimirReverso(Ptr);

	
	return 0;
}

