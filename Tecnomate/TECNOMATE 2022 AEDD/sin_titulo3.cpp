#include <iostream>
using namespace std;
//recursiva
bool incognita(int x, int y){
	bool bandera = false;
	
	if(y==1){
		bandera=true;
		cout << "paso por aca"<<endl;
	}else{
		if(x%y==0){
			cout << "multipli"<<endl;
			bandera=false;
		}else{
			while(x%y!=0 and !bandera){
				cout << "Bucle funcion"<<y<<endl;
				
				if(y==1){
					bandera=true;
				
				}
				y-=1;
				
			}
			if(x%y==0){
				bandera=false;
			}
		}
	}
	
	
	return bandera;
}
	int main(int argc, char const *argv[]){
		int n;
		cin >> n;
		
		int generados = 0, numero = 2;
		while (generados < n)
		{
			if(incognita(numero, numero-1)){
				generados++;
			}
			numero++;
		}
		
		cout << numero-1 <<endl;
		
		
		return 0;
	}
		
