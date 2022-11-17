/**
 * @file exercise6.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-16
 * 
 * @copyright Copyright (c) 2022
 * Diseñar y codificar una función JUGADA que reciba una matriz V de 80x40 que contiene 
 * información sobre el estado de cada casillero en una grilla o tablero de juego. Los posibles estados
 * son 0 (vacía), 1 (con ficha roja), 2 (con ficha verde).
 * La jugada consiste en cambiar las fichas según los siguientes criterios:
 *  - Donde hay 3 fichas verdes seguidas en una misma fila, dejar un ficha verde en el medio y
 *    vaciar las de los costados.
 *  - Si una ficha verde está rodeada de fichas rojas, cambiar la verde por ficha roja y vaciar las
rojas.
 */
#include <iostream>
#define TF1 4
#define TF2 8
#define VACIO 0
#define ROJO 1
#define VERDE 2
using namespace std;
void JUGADA(short tablero[TF1][TF2]){
    short verdes = 0;
    for (short i = 0; i < TF1; i++)
    {
        for (short j = 0; j < TF2; j++)
        {
            if(tablero[i][j] == VERDE) verdes++;
            else verdes = 0;

            if(verdes == 3){//se deja la verde del medio, las otras se sacan.
                tablero[i][j-2] = VACIO;
                tablero[i][j] = VACIO;
            }

            if(
                tablero[i-1][j-1] == ROJO && tablero[i-1][j] == ROJO && tablero[i-1][j+1] == ROJO &&
                tablero[i][j-1] == ROJO && tablero[i][j] == VERDE && tablero[i][j+1] == ROJO &&
                tablero[i+1][j-1] == ROJO && tablero[i+1][j] == ROJO && tablero[i+1][j+1] == ROJO
            ){
                cout << "ESTA RODEADO!" <<endl;
                tablero[i-1][j-1] = VACIO; 
                tablero[i-1][j] = VACIO;
                tablero[i-1][j+1] = VACIO;
                tablero[i][j-1] = VACIO;
                tablero[i][j] = ROJO;
                tablero[i][j+1] = VACIO;
                tablero[i+1][j-1] = VACIO;
                tablero[i+1][j] = VACIO;
                tablero[i+1][j+1] = VACIO;
            }
        }
        
    }
    
}
int main(){
    short tablero[TF1][TF2] = {
        {VACIO,VACIO,VACIO,VERDE,VERDE,VERDE,VACIO,VACIO},
        {ROJO,ROJO,ROJO,VERDE,VERDE,VERDE,VACIO,VACIO},
        {ROJO,VERDE,ROJO,VERDE,VERDE,VERDE,VACIO,VACIO},
        {ROJO,VERDE,ROJO,VERDE,VERDE,VERDE,VACIO,VACIO}
    };
    string response;
    cout << "================ Bienvenido ================"<<endl;
    cout << "Este es el tablero inicial:"<<endl;
    for (short i = 0; i < TF1; i++)
        {
            for (short j = 0; j < TF2; j++)
            {
                if(j == TF2-1) cout << tablero[i][j]<<endl;
                else cout << tablero[i][j] << " ";
            }
            
        }
    do
    {
        cout << "¿Desea hacer una jugada?"<<endl;
        cout << "Respuesta: ";
        cin >> response;
        if(response != "exit"){
            JUGADA(tablero);
            cout << "Ok, este fue el resultado:"<<endl;
        }else cout << "Ok, este es el resultado final:"<<endl;
        for (short i = 0; i < TF1; i++)
        {
            for (short j = 0; j < TF2; j++)
            {
                if(j == TF2-1) cout << tablero[i][j]<<endl;
                else cout << tablero[i][j] << " ";
            }
            
        }
        
    } while (response != "exit");
    

    
    return 0;
}
