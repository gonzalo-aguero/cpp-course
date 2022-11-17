/**
 * @file exercise13.cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @version 0.1
 * @date 2022-09-04
 * 
 * @copyright Copyright (c) 2022
 * 
 *  Se recibe una matriz SopaLetras (orden 10 x 10) de caracteres y una palabra P almacenada en
 * una cadena de caracteres de longitud máxima 10. Se debe informar:
 * a. Si esa palabra se encuentra en alguna fila, de derecha a izquierda. (Si se la encuentra indicarlo con un
 *  mensaje del tipo: la palabra XXXX está en la fila NN).
 * b. Cuántas columnas tienen únicamente letras minúsculas)
 * 
 * Nota: Si la palabra tiene menos de 10 caracteres (por ejemplo 6), se considera que está en una fila si la palabra
 * aparece ocupando las últimas seis posiciones y todas las restantes son blancos.
 */

#include <iostream>
#include <string>
#define TF 10
using namespace std;

int main(){
    char mat[TF][TF] = {
        {'a','s','D','r','T','A','s','d','r','T'},
        {'a','s','D','r','T','A','s','d','r','T'},
        {'l','A','A','A','A','l','l','o','r','T'},
        {'a','s','D','r','T','A','s','d','r','T'},
        {'a','s','D','r','T','A','s','d','r','T'},
        {'\0','\0','\0','\0','\0','l','l','o','r','t'},
        {'a','s','D','r','A','a','A','d','r','T'},
        {'a','s','D','r','T','A','s','d','r','T'},
        {'a','s','D','r','T','A','s','d','r','T'},
        {'a','s','D','r','T','A','s','d','r','T'},
    };
    char p[TF] = {};
    int i = 0, j, psize, coincidencias;
    bool encontrada = false;
    
    cout << "Ingrese el tamaño de la palabra a buscar: ";
    cin >> psize;
    while (i < TF && i < psize){
        cin >> p[i];
        i++;
    }

    //inciso a
    i = 0;//fila
    int blancos;
    while (i < TF && !encontrada){
        j = TF - 1, coincidencias = 0, blancos = 0;//coincidencias tambien se puede utilizar como indice de p[]
        while(j >= 0 && !encontrada){
            if(psize < 10){
                //Controlar que empieze desde la ultima columna
                if(mat[i][TF-1] == p[0]){
                    if(mat[i][j] == '\0') blancos++;
                    
                    if(coincidencias != psize){
                        if(mat[i][j] == p[coincidencias]) coincidencias++;
                        else coincidencias = 0;
                    }
                    if(coincidencias == psize && coincidencias+blancos == TF) encontrada = true;
                }else{
                    j = -1;//se detiene el bucle de la columna.
                }
            }else{
                if(mat[i][j] != p[psize-1-j]){
                    j = -1;//se detiene el bucle de la columna.
                }
                if(j == 0) encontrada = true;
            }
            j--;
        }
        if(!encontrada) i++;
    }
    
    if(encontrada) cout << "Se ha encontrado la palabra \""<<p<<"\" en la fila N°"<<i<<"."<<endl;
    else cout << "No se ha podido encontrar la palabra \""<<p<<"\" en la sopa de letras."<<endl;
    
    //inciso b
    j = 0, i = 0;
    bool minusculas;//actual columna solo tiene minusculas
    int columnas = 0;//columnas con letras minusculas
    while (j < TF){
        minusculas = true;
        i = 0;
        while (i < TF && minusculas){
            if(!islower(mat[i][j])) minusculas = false;
            i++;
        }
        if(minusculas) columnas++;
        j++;
    }
    cout << "Se han encontrado "<<columnas<<" columnas que tienen únicamente letras minúsculas." <<endl;
    
    return 0;
}