#include <iostream>
using namespace std;
//Ordenamiento Por MMIs
int main(int argc, char const *argv[]){
    int vector[1000], n, nOriginal, aux, contador = 1, menor, indiceMayor, i = 0;
    cin >> n;
    nOriginal = n;

    while (i < n)
    {
        cin >> vector[i];
        i++;
    }

    while (n > 0){
        indiceMayor = vector[0];
        for (int j = 1; j < n; j++)//busca el indice del mayor valor
        {
            if(vector[j] > vector[indiceMayor]) indiceMayor = j;
        }

        while(indiceMayor < n){//se corree el mayor al final
            if(vector[indiceMayor] > vector[indiceMayor+1]){//se cambian
                aux = vector[indiceMayor];
                vector[indiceMayor] = vector[indiceMayor+1];
                vector[indiceMayor+1] = aux;
                indiceMayor++;
                contador++;
            }
        }
        n--;
    }
    
    
    cout << contador << endl;
    return 0;
}
