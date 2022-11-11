/**
 * @file exercise2.cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @version 0.1
 * @date 2022-09-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * PROBLEM DEFINITION
 * Una empresa de aerolíneas nacional posee aviones de 4 categorías y viaja a 50
 * localidades de zonas turísticas del país. Se dispone de un registro de todos los pasajes vendidos en
 * una temporada en una matriz de pasajes vendidos indexada por código de categoría (0, 1, 2, 3) y
 * código de destino (0 a 49). Además se dispone de un vector ordenado por código de destino que
 * indica el nombre de cada localidad.
 * Se pide informar :
 *  a) La cantidad de pasajeros por localidad.
 *  b) La cantidad de pasajeros por categoría.
 *  c) Las localidades a las que no se vendió ningún pasaje.
 *  d) La localidad a la que viajó la menor cantidad de pasajeros.
 *  e) La cantidad de localidades a las cuales viajaron más de 1000 pasajeros.
 *  f) Indicar si existe o no alguna categoría de aviones para las que no se vendió ningún
 *  pasaje.
 */
#include <iostream>
#define CAT 4
#define ZONAS 50
#include <cstdlib>
#include<ctime>
using namespace std;

int cantPorLoc(int mat[][ZONAS], int zona){
	int suma = 0;
	for(int i=0;i<CAT;i++) { 
		suma += mat[i][zona];
	}
	cout << "La cantidad de pasajeros por localidad es: "<<suma<<endl;
	return suma;
}
int cantPorCat(int mat[][ZONAS], int cat){
	int suma = 0;
	for(int i=0;i<ZONAS;i++) { 
		suma += mat[cat][i];
	}
	cout << "La cantidad de pasajeros por categoria es: "<<suma<<endl;
	return suma;
}
void zonasSinVentas(int mat[][ZONAS]){
	int localidad;
	for(int i=0;i<ZONAS;i++) { 
		localidad = cantPorLoc(mat, i);
		if(localidad == 0) cout << "A la localidad "<<i<<" no se le ha vendido ningún pasaje."<<endl;
	}
	return;
}
void catSinVentas(int mat[][ZONAS]){
	int cantitdad, i = 0;

	while(i < ZONAS){
		cantitdad = cantPorCat(mat, i);
		if(cantitdad == 0){
			cout << "Existe una categoria que no ha vendido ningun pasaje"<<endl;
			i = ZONAS;
		}
		i++;
	}
	return;
}
void zonaConMenosPasajeros(int mat[][ZONAS]){
	int localidad = cantPorLoc(mat, 0), localidad1;
	for(int i=0; i<ZONAS;i++) { 
		localidad1 = cantPorLoc(mat, i);
		if(localidad > localidad1) localidad = localidad1;
		if(localidad1 > 1000) cout << "Se han vendido más de 1.000 pasajes hacia la localidad: "<<i<<endl;
	}
	
	cout << "La localidad con menos pasajeros es: "<<localidad<<endl;
	return;
}
int main(int argc, char *argv[]) {
	int M[CAT][ZONAS];

	srand(time(NULL));
	for(int i=0;i<CAT;i++) { 
	 for(int j=0;j<ZONAS;j++) { 
        int num = rand() % 100;
        if(num < 0) M[i][j]= num*(-1);
        else M[i][j]= num;
	 }
	}
	
	zonaConMenosPasajeros(M);
	catSinVentas(M);
	zonasSinVentas(M);
	cantPorCat(M,3);
	cantPorLoc(M,3);

	return 0;
}