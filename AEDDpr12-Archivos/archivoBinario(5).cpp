#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	do{
		un
		inventario[i] = unLibro;
		i++;
		cout << endl << "Para salir ingrese 0 o cualquier número para continuar: ";
		cin >> bandera;
		
		if(bandera != 0) cin.ignore();
	}while(bandera != 0);
	
	
	ofstream fInventario;
	fInventario.open("inventario.bin", ios::app);
	if(!fInventario) cout << "Error al abrir el archivo"<<endl;
	else{
		for(int j=0;j<i;j++) { 
			fInventario.seekp(0, ios::end);//mover cursor para escritura (put)
			fInventario.write((char *)(&inventario[j]), sizeof (inventario[j]));
		}
	}
	return 0;
}

