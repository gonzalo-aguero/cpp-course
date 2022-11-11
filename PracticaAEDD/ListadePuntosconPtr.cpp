#include <iostream>
using namespace std;
//Defina las estructuras
struct Punto{
	int x,y;
};
struct Nodo{
	Punto info;
	Nodo* sig;
};
typedef Nodo* Lista;
typedef Nodo* PtrNodo;

//Defina una lista vacía
//	Lista L1==NULL; // (es lo mismo que) Nodo* L1

	PtrNodo CrearNodo(Punto p){
		PtrNodo ret = new Nodo;
		ret->info = p;
		ret->sig = NULL;
		return ret;
	}

//insertar nodos al final
	void insertarFinal(Lista &lista, PtrNodo nuevo){ //Lista &lista = Nodo**lista
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
		while(L!=NULL){
			cout<<"("<<L->info.x<<","<<L->info.y<<")"<<endl;
			L=L->sig;
		}
	}
	
	

bool existe(Punto p1, Lista lista){
	Lista aux = lista;
	if(lista != NULL){
		while(aux->sig != NULL && (aux->info.x != p1.x or aux->info.y != p1.y)){
			aux = aux->sig;
		}
		
	}
	return (lista != NULL && aux->info.x == p1.x && aux->info.y == p1.y);
	
}
int cantNodos(Lista l){
	int ret = 0;
	while(l != NULL){
		l = l->sig;
		ret++;
	}
	return ret;
}
bool insertar(Lista &lista, PtrNodo p, int orden){
	Lista aux = lista, aux1;
	int i = 0;
	bool bandera = true;
	int c = cantNodos(l);
	if(orden <= c+1){
		if(orden==1 or orden==c+1) insertarFinal(lista, p);
		
	}
	else{
		for(int i=0;i<orden;i++) { 
		aux1=aux;
		aux=aux->sig;
		}
	}
	aux1->sig=p;
	p->sig=aux;

	return bandera;
}
int main(int argc, char *argv[]) {	
	Lista L1=NULL;
	Punto p1;
	int cant;
	
	cout<<"Ingrese la cantidad de puntos que desea almacenar."<<endl;
	cin>>cant;
	for(int i=0;i<cant;i++) { 
		cout<<"Ingrese el punto x"<<endl;
		cin>>p1.x;
		cout<<"Ingrese el punto y"<<endl;
		cin>>p1.y;
		PtrNodo puntero = CrearNodo(p1);
		insertarFinal(L1, puntero);
	}
	mostrar(L1);
	cout<<"Ingrese el punto x"<<endl;
	cin>>p1.x;
	cout<<"Ingrese el punto y"<<endl;
	cin>>p1.y;
	PtrNodo puntero = CrearNodo(p1);
	bool resultado = insertar(L1, puntero, 5);
	if(resultado)
	cout << "inser correcta"<<endl;
	else
		cout << "inser incorrecta"<<endl;
	return 0;
}

