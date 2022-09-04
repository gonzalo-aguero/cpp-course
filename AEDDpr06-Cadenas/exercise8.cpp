/**
 * @file exercise8.cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @version 0.1
 * @date 2022-09-04
 * 
 * @copyright Copyright (c) 2022
 * 
 * PROBLEM DEFINITION
 * Escribir un programa que limpie de ruidos una señal de entrada. La señal de entrada será una 
 * cadena con letras y números y la salida será la misma cadena eliminando los números.
 * Ejemplo:
 *  Entrada: "Es2to0 3es u9na se88ñal c0on ru1id2os"
 *  Salida: "Esto es una señal con ruidos".
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    int longitud;
    
    cout << "Ingrese la entrada: ";
    getline(cin, input);

    longitud = input.size();
    for (int i = 0; i < longitud; i++){
        if(isdigit(input[i])) input[i] = '\0';
    }

    cout << "Salida: "<< input<<endl;

    return 0;
}