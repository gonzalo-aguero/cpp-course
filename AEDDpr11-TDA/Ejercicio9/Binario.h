#ifndef BINARIO_H
#define BINARIO_H
#define BYTE_SIZE 8
struct Binario{
	int value;
};
void asignar(char bits[], Binario &b);
char* valorBinario(Binario b);
void print(Binario b);
void print(char* bits);
Binario sumar(Binario b1, Binario b2);
Binario mayor(Binario b1, Binario b2);
#endif
