#include <iostream>
using namespace std;
//Ordenamiento Por MMIs
int main(int argc, char const *argv[]){
    int vector[1000], n, aux, contador = 1, menor;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> vector[i];
    }

    bool bandera = false;
    int j = 1;
    menor = vector[0];
    while (j < n && !bandera)
    {
        if(vector[j] < menor){
            aux = menor;
            menor = vector[j];
            vector[j] = aux;
            bandera = false;
            contador++;
            // j = 1;
        }else{
            // if(contador == n){
            //     bandera = true;
            // }else{
                j++;
            // }
        }
    }
    
    cout << contador << endl;
    return 0;
}
