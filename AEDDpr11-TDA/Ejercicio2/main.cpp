#include<iostream>
#include "Hora.h"
using namespace std;

int main (int argc, char *argv[]) {
	Hora h = ponerAHora(22,38,32);
	Hora h2 = ponerAHora(20,40,32);	
	mostrar24(h);
	mostrar12(h);
	adelantar(h, 125);
	mostrar24(h);
	int dif = diferenciaEnMinutos(h, h2);
	cout << "diferenciaEnMinutos: "<< dif <<endl;
	dif = diferenciaEnSegundos(h, h2);
	cout << "diferenciaEnSegundos: "<< dif <<endl;
	
	
	
	
	return 0;
}

