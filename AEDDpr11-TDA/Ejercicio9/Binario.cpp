#include "Binario.h"
#include <cmath>
#include <iostream>
using namespace std;
void asignar(char bits[BYTE_SIZE], Binario &b){
	int peso = BYTE_SIZE-1;
	b.value = 0;
	for(int i=0; i<BYTE_SIZE; i++) { 
		int value = int(bits[i])-48;//'1' to 1 and '0' to 0.
		b.value += value * pow(10, peso);
		peso--;
	}
}
char* valorBinario(Binario b){
	char bits[BYTE_SIZE];
	for(int i = BYTE_SIZE-1; i>= 0;i--) { 
		bits[i] = (char)(b.value%10) + 48;
		b.value /= 10;
	}
//	cout << "BITS:"<<bits;
	return bits;
}
void print(Binario b){
	char* bits = valorBinario(b);
	for(int i=0;i < BYTE_SIZE; i++) { 
		cout << bits[i];
		if(i == BYTE_SIZE-1) cout << endl;
		else cout << " ";
	}
}
void print(char* bits){
	for(int i=0;i < BYTE_SIZE; i++) { 
		cout << bits[i];
		if(i == BYTE_SIZE-1) cout << endl;
		else cout << " ";
	}
}
Binario sumar(Binario b1, Binario b2);
Binario mayor(Binario b1, Binario b2);
