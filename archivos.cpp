#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	char c;
	ifstream file1;
	
	file1.open("archivo.txt");
	
	// Lectura
	if(file1){
		while(!file1.eof()){
			file1 >> c; 
			cout << c;
		}
	}else{
		cout << "Error al abrir el archivo."<<endl;
	}
	return 0;
}

