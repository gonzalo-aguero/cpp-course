/**
 * @file exercise6.cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @version 0.1
 * @date 2022-09-01
 * 
 * @copyright Copyright (c) 2022
 * 
 * PROBLEM_DEFINITION
 * Realizar un programa que busque todas las ocurrencias de la palabra prohibida, que introduzca el
 * usuario, en una frase leída y las reemplace por la cadena “XXX” (donde el número de “X” que contiene la
 * cadena deberá ser igual al número de caracteres que tiene la palabra prohibida).
 * Ejemplo:
 *  Introduce una frase: “Esto es una ese escondida y la he escrito yo”
 *  Introduce la palabra prohibida: “es”
 *  La frase resultante es: “Esto XX una XXe XXcondida y la he XXcrito yo
 */
#include <iostream>
#include <string>
using namespace std;
int main(){
    string frase, prohibida; 
    int i = 0, j = 0, longP, longF, coincidentes = 0, 
        reemplazadas = -1;// == -1 para utilizar como "false" y >= 0 para utilizar como contador.
    
    cout <<"Ingrese la palabra a censurar: ";
    getline(cin, prohibida);
    cout<<"Ingrese una frase: ";
    getline(cin, frase);

    longP = prohibida.size();
    longF = frase.size();

    cout <<"Palabra prohibida: "<<prohibida<<endl;
    cout <<"Frase inicial: "<<frase<<endl;

    while (i < longF){
        if(frase[i] == prohibida[j]){
            if(coincidentes < longP) coincidentes++;
            j++;

            if(coincidentes == longP && reemplazadas == -1){
                //si chars coincidentes es igual a la cant de chars de la palabra:
                i -= longP;
                j = 0;
                reemplazadas = 0;
            }else if(reemplazadas != -1){
                //reemplazadas es diferente a -1, se activa el proceso de reemplazo de chars
                frase[i] = 'X';
                reemplazadas++;

                if(reemplazadas == longP){
                    //si chars reemplazados es igual a la cant de chars de la palabra (se remplazó toda la palabra por equis):
                    reemplazadas = -1;
                    coincidentes = 0;
                    j = 0;
                }
            }
        }else{
            coincidentes = 0;
            j = 0;
        }
        i++;
    }
    
    cout <<"Frase censurada: "<<frase<<endl;

    return 0;
}
