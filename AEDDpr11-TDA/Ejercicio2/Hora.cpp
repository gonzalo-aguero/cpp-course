#include "Hora.h"
#include <iostream>
using namespace std;
Hora ponerAHora(int hora, int min, int seg){
	Hora h = {hora, min, seg};
	return h;
}
void mostrar24(Hora h){
	cout << h.hora<<":"<<h.minuto<<":"<<h.segundo<<endl;
}
void mostrar12(Hora h){
	string ampm;
	int hora;
	if(h.hora < 12){
		ampm = "AM";
		hora = h.hora;
	}else{
		ampm = "PM";
		if(h.hora > 12){
			hora = h.hora - 12;
		}else{
			hora = h.hora;
		}
	}
	cout << hora<<":"<<h.minuto<<":"<<h.segundo<<" "<<ampm<<endl;
}
void corregir(Hora &h){
	while(h.hora >= 24) h.hora -= 24;
}
void adelantar(Hora &h, int minutos){
	int horas = 0;
	while(minutos >= 60){
		minutos -= 60;
		horas++;
	}
	h.hora += horas;
	h.minuto += minutos;
	corregir(h);
}
void atrasar(Hora &h, int minutos){
	int horas = 0;
	while(minutos >= 60){
		minutos -= 60;
		horas++;
	}
	h.hora += horas;
	h.minuto += minutos;
	corregir(h);
}
int diferenciaEnMinutos(Hora h1, Hora h2){
	int mins1 = h1.hora*60 + h1.minuto;
	int mins2 = h2.hora*60 + h2.minuto;
	cout << "mins1:"<<mins1<<endl;
	cout << "mins2:"<<mins2<<endl;
	int dif;
	if(mins1 > mins2){
		dif = mins1 - mins2;
	}else{
		dif = mins2 - mins1;
	}
	return dif;
}
int diferenciaEnSegundos(Hora h1, Hora h2){
	int seg1 = h1.hora*3600 + h1.minuto*60 + h1.segundo;
	int seg2 = h2.hora*3600 + h2.minuto*60 + h2.segundo;
	int dif;
	if(seg1 > seg2){
		dif = seg1 - seg2;
	}else{
		dif = seg2 - seg1;
	}
	return dif;
}
