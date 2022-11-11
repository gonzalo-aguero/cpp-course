/**
 * @file E3_2018.cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/es/problems/view/1911?origem=1
 * @version 0.1
 * @date 2022-11-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#define TF 50
using namespace std;
struct Alumno{
    string nombre;
    string firma;
};
int main() {
    short N, M, i = 0, diferencias = 0;
    Alumno alumnos[TF], asistencias[TF];

    do{
        cin >> N;
        if(N != 0){
            while(i < N){
                cin >> alumnos[i].nombre >> alumnos[i].firma;
                i++;
            } 

            cin >> M;
            i=0;
            while (i < M){
                string nombre, firma, firmaHoy;
                short j = 0, index = -1;//posicion del alumno dentro de la lista de alumnos
                cin >> nombre >> firma;

                while (j < N && index == -1){{
                    if(alumnos[j].nombre == nombre) index = j;
                    else j++;
                }}
                
                firmaHoy = alumnos[index].firma;
                if(firmaHoy != firma) diferencias++;

                i++;
            } 
            
            cout << diferencias << endl;
        }
    }while(N != 0);

    return 0;
}