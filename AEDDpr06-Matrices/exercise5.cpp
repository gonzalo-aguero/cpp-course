/**
 * @file exercise5.cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @version 0.1
 * @date 2022-09-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * PROBLEM DEFINITION
 * Un cuadrado mágico es una disposición de números naturales en una tabla cuadrada, de
 * forma tal que las sumas de cada columna, de cada fila y de cada diagonal son iguales. Los cuadrados
 * mágicos más populares son aquellos que tienen los números consecutivos desde el 1 hasta n^2, donde
 * n es el número de filas y de columnas. Escribir una función que reciba un arreglo e indique si se trata
 * o no de un cuadrado mágico.
 * Ejemplos:
 *  es_magico (arreglo ([[3, 1, 5],
 *                       [4, 7, 2],
 *                       [9, 8, 6]])) → False
 *  es_magico (arreglo ([[2, 7, 6],
 *                       [9, 5, 1],
 *                       [4, 3, 8]])) → True
 * 
 * PENDIENTE DE CORRECCIÓN
 */
#include <iostream>
using namespace std;
#define TF 3
bool esCuadradoMagico(int array[TF][TF]);
int main(){
    int array[TF][TF] = {
        {2,7,6},
        {9,5,1},
        {4,3,8}
    };
    bool result = esCuadradoMagico(array);
    cout << "Es cuadrado mágico? "<< result <<endl;
}

bool esCuadradoMagico(int array[TF][TF]){
    int i = 0, j;
    bool output = true;
    int sums[2*TF + 2] = {0};
    cout << endl;

    // sumatories of diagonals
    i = 0;
    while (i < TF){
        sums[1 + (TF-1)*2] += array[i][i];// diagonal "\"
        sums[2 + (TF-1)*2] += array[(TF-1)-i][(TF-1)-i];// diagonal "/"
        cout << array[i][i] << "  " << array[(TF-1)-i][i] << endl;
        i++;
    }
    i = 1;
    while (i < TF){
        if(array[i] == array[i-1]) cout << "Sumatoria N°"<<i<<" es igual"<<endl;
        else output = false; break;
        i++;
    }

    // sumatories of the rows
    while (output &&i < TF){
        j=0;
        while (j < TF){
            sums[i] += array[i][j];
            j++;
        }
        i++;
    }

    // sumatories of the columns
    j = 0;
    while (output && j < TF){
        i=0;
        while (i < TF){
            sums[j + TF-1] += array[i][j];
            i++;
        }
        j++;
    }

    return output;
}