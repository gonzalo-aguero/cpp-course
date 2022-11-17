#ifndef CONTADOR_H
#define CONTADOR_H
struct contador{
	int valor;
};
contador crear (int valor);
void incrementar (contador & c, int pasos) ; //incrementa c en ‘´pasos’
void decrementar (contador & c, int pasos) ; //decrementa c en ‘´pasos’
int toInteger (contador c);
#endif
