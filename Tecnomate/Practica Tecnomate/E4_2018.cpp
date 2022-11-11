/**
 * @file E4_2018.cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/es/problems/view/1516
 * @version 0.1
 * @date 2022-11-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#define TF 50
#define TF2 100
using namespace std;
int main() {
    char dibujo[TF][TF], dibujoAmpliado[TF2][TF2];
    int n = -1, m = -1, a, b;

    cin >> n >> m;
    while (n!=0 || m!=0){
        for (int i = 0; i < n; i++)//linea
        {   
            for (int j = 0; j < m; j++)//columna
            {
                cin >> dibujo[i][j];
            }
        }

        //Imprimir 
        cout << "Antes:"<<endl;
        //lineas
        for (int i = 0; i < n; i++){
            //columnas
            for (int j = 0; j < m; j++) cout << "C["<<i<<"]["<<j<<"]:"<<dibujo[i][j] << " ";
            cout << endl;
        }


        // Ampliar
        cin >> a >> b;
        // for (int i = 0; i < a; i += (a/n))//linea
        for (int i = 0; i < a; i += (a/n))//linea
        {   
            for (int t = i; t < i+(a/n); t++){//Repeticion de filas
                for (int j = 0; j < b; j += (b/m))//columna
                {
                    //Repeticion de columnas
                    for (int k = j; k < j+(b/m); k++) dibujoAmpliado[t][k] = dibujo[i/(a/n)][j/(b/m)];
                }
            }
            
        }
        
        //Imprimir
        cout << "Despues:"<<endl;
        for (int i = 0; i < a; i++)//linea
        {   
            for (int j = 0; j < b; j++)//columna
            {
                // cout << "C["<<i<<"]["<<j<<"]:"<<dibujoAmpliado[i][j] << " ";
                cout << dibujoAmpliado[i][j] << " ";
            }
            cout << endl;
        }

        cin >> n >> m;
    }
    

    



    return 0;
}