/**
 * @file exercise12.cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @version 0.1
 * @date 2022-09-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * PROBLEM DEFINITION
 * Escribir un programa que, teniendo una matriz de n x n, inicialice el valor de sus
 * elementos en forma de espiral desde el elemento central hacia fuera.
 */
#include <iostream>
using namespace std;
#define N 5
int main(){
    bool NPAR;
    int array[N][N] = {};
    int i, j, 
    elemento = 0, //Se recorrerá el array hasta llegar al elemento (N*N)-1
    totalNiveles, // cantidad de elementos hasta llegar al centro de la matriz (considerando el centro tambien como un nivel)
    nivel = 1,//nivel actual
    valor,//valor a asignar al elemento que apunta el cabezal
    direccion,//Direccion para mover el cabezal, 1: izq, 2: abajo, 3: der, 4: arriba
    elementoDelNivel = 1,//El numero del elemento actual del nivel actual.
    cantElementosNivel;//Cant de elementos en el nivel actual.
    
    cout <<"Tamaño de la Matríz: "<<N<<"x"<<N<<endl;
    if(N%2 == 0) NPAR = true;
    else NPAR = false;

    //Posicion Inicial
    if (NPAR){
        i = N/2 - 1;
        j = i + 1;  
        cantElementosNivel = 4;//cant de elementos en el nivel 1;
    }else{
        i = (N+1)/2 -1;
        j = i;
        cantElementosNivel = 1;//cant de elementos en el nivel 1;
    }
    totalNiveles = i + 1;
    cout << "La posición inicial es: M["<<i<<"]["<<j<<"]."<<endl;
    cout << "Los cantidad de niveles son: "<<totalNiveles<<endl;


    while (elemento < N*N){
        valor = elemento + 1;
        array[i][j] = valor;
        

        if(elementoDelNivel == cantElementosNivel){
        }else{
            // DECICION DEL PROXIMO MOVIMIENTO
            int cantPorLado;
            if(nivel == 1 && !NPAR){
                cantPorLado = 1; 
            }else{
                cantPorLado = (cantElementosNivel - 4)/4;
            }

            if(NPAR){

            }else{
                if(elementoDelNivel <= cantPorLado) direccion = 2; //Lado izquierdo
                else if(elementoDelNivel == cantPorLado+1) direccion = 3; //Esquina inferior izquierda
                else if(elementoDelNivel <= (2*cantPorLado)+1) direccion = 3; //Lado inferior
                else if(elementoDelNivel == (2*cantPorLado)+2) direccion = 4; //Esquina inferior derecha
                else if(elementoDelNivel <= (3*cantPorLado)+2) direccion = 4; //Lado derecho
                else if(elementoDelNivel == (3*cantPorLado)+3) direccion = 1; //Esquina superior derecha
                else if(elementoDelNivel <= (4*cantPorLado)+3) direccion = 1; //Lado superior
                else if(elementoDelNivel == (4*cantPorLado)+4 || elementoDelNivel == cantElementosNivel){//Esquina superior izquierda
                    //Salto a otro nivel y preparacion
                    nivel++;
                    elementoDelNivel = 1;
                    if(NPAR){
                        cantElementosNivel = 8*nivel - 4;//EC. GENERAL OBTENIDA POR RELACION DE RECURRENCIA, para n >= 1.
                        direccion=3;
                    }else{
                        if(nivel != 1){
                            cantElementosNivel = 8*nivel - 8;//EC. GENERAL OBTENIDA POR RELACION DE RECURRENCIA, para n > 1.
                        }else{
                            cantElementosNivel = 1;
                        }
                        direccion=1;
                    }
                } 
            }
        }
        

        if(direccion == 1) j--;//izquierda
        else if(direccion == 2) i++;//abajo
        else if(direccion == 3) j++;//derecha
        else if(direccion == 4) i--;//arriba

        elementoDelNivel++;
        elemento++;
    }


    cout << "Felicitaciones, se recorrieron todos los elementos!"<<endl;
    cout << "Veamos como quedó..."<<endl;
    for (size_t i = 0; i < N; i++){
        cout <<"[ ";
        for (size_t j = 0; j < N; j++){
            cout << array[i][j]<<" ";
        }
        cout <<"]"<<endl;
    }
    

	return 0;
}