#include<iostream>
#include "Binario.h"
using namespace std;

int main (int argc, char *argv[]) {
	Binario b;
	char bits[BYTE_SIZE] = {'0','1','1','0','0','0','0','1'};
	asignar(bits, b);
	cout << "VALUE="<<b.value<<endl;
	
	char* arrayBits = valorBinario(b);
	cout << "Bits del arrayBits:"<<endl;
//	for(int i=0;i<BYTE_SIZE;i++) { 
//		cout << " "<<arrayBits[i];
//	}
	cout << arrayBits <<endl;
//	print(arrayBits);
	
//	print(b);
	return 0;
}

