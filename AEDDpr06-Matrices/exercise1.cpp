/**
 * @file exercise1.cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @version 0.1
 * @date 2022-09-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * PROBLEM DEFINITION
 * Una empresa posee 5 servidores y desea analizar el tráfico de correo electrónico entre
 * ellos. Para esto almacenará los datos en una matriz correo de 5x5 elementos. El elemento correo[i][j]
 * indicará el número de kb de correo enviados desde el servidor i hasta el servidor j.
 * Obtener la siguiente información:
 * 	a) Total de correo (en kb) enviado por cada uno de los cinco servidores.
 *  b) Número del servidor que ha enviado mayor cantidad de kb en correos.
 * 	c) Muestre los servidores que recibieron correo por encima de una cota M establecida
 * 	(recibida como dato).
 */
#include <iostream>
using namespace std;
#define TF 5 // cantidad servidores
#define M 250 //limite kb
int main(){
	int correo[TF][TF] = {
		{50,60,0,20,100},
		{50,60,0,20,100},
		{50,60,0,20,100},
		{50,60,0,20,100},
		{50,60,0,20,100}
		};
	int total, //total enviados por servidor actual
		i_mayor = 0,
		mayorTotal = 0,
		recibidos[TF] = {0};
	
	for(int i =0; i<TF;i++){
		total =0;
		for(int j=0;j<TF;j++){
			total += correo[i][j];
			recibidos[j] += correo[i][j];
		}
		
		cout <<"Total de kB enviadas por el servidor "<<i<<": "<<total<<endl;
        if(total > mayorTotal){
            mayorTotal = total;
            i_mayor = i;
        }
	}

    cout << "El servidor "<<i_mayor<<" es el que más kB ha enviado."<<endl;
    for (int j = 0; j < TF; j++){
        if(recibidos[j] > M)
            cout << "El servidor "<<j<<" ha superado el límite de "<<M<<" kB de bajada."<<endl;
    }
}