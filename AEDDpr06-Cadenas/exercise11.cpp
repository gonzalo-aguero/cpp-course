/**
 * @file exercise11.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-16
 * 
 * @copyright Copyright (c) 2022
 * 
 * : Un texto se ha guardado en una cadena de caracteres, donde cada componente tiene un
 * carácter. Hay frases que terminan con punto y párrafos que terminan con ´#´.
 * Ejemplo:
 *  El cielo está oscuro.Llega la noche.#Serenidad absoluta.Silencio profundo.#estoy aquí.
 *  a) Se desea formatear el texto, modificando la lista de manera que luego de cada salto de línea
 *  se agreguen 3 “blancos”.
 *  b) También se debe controlar que después de un punto el primer carácter sea mayúscula.
 *  c) Se debe informar cuantas frases hay en todo el texto.
 */
#include <iostream>
#define FIN_FRASE '.'
#define FIN_PARRAFO '#'
using namespace std;
int main(){
    string str, aux;
    int size, index, frasesCount = 0;

    getline(cin, str);
    size = str.size();

    for (int i = 0; i < size; i++)
    {
        if(str[i] == FIN_PARRAFO){
            index = 0;
            aux = "";
            for (int j = i+1; j < size; j++)
            {
                aux += '\0';
                aux[index] = str[j];
                index++;
            }

            //Se agregan los espacios
            str[i] = ' ';
            str[i+1] = ' ';
            str[i+2] = ' ';

            str += '-';//Se agregan 3 espacios
            str += '-';
            
            index = 0;
            size = str.size();
            for (int j = i+3; j < size; j++)
            {
                str[j] = aux[index];
                index++;
            }
            
        }else if(str[i] == FIN_FRASE){
            frasesCount++;
            index = i+1;
            while (!isalpha(str[index]) && str[index] != '\0')
            {
                index++;    
            }
            
            if(isalpha(str[index]) && !isupper(str[index])) str[index] = toupper(str[index]);
        }
    }

    cout << "Texto formateado: " << str << endl;
    cout << "El texto tiene "<<frasesCount<<" frases."<<endl;
    
    return 0;
}