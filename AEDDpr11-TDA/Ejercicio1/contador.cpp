#include "contador.h"
contador crear (int valor){
	contador c;
	c.valor = valor;
	return c;
}
void incrementar (contador & c, int pasos){
	c.valor += pasos;
}
void decrementar (contador & c, int pasos){
	c.valor -= pasos;
}
int toInteger (contador c){
	return c.valor;
}
