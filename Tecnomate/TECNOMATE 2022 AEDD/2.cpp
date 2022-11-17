#include <iostream>
#include <string>
using namespace std;
//farmacos
int main(int argc, char const *argv[]){
    string celula, farmacos[1000];
    int n, i= 0, k = 0, coincidencias = 0, eficientes[1000] = {0};
    cin >> celula;

    cin >> n;

    while(i < n){
        cin >> farmacos[i];
        for (int j = 0; j < celula.size(); j++)
        {
            if(celula[j] == farmacos[i][k]){
                coincidencias++;
                k++;
            }

            if(coincidencias == farmacos[i].size()){
                eficientes[i]++;
                coincidencias = 0;
                k = 0;
            }
        }
        
        i++;
    }

    int mayorEficiencia = 0;
    for (int j = 0; j < n; j++){
        if(eficientes[j] > mayorEficiencia) mayorEficiencia = eficientes[j];
    }

    for (int j = 0; j < n; j++){
        if(eficientes[j] == mayorEficiencia){
            cout << farmacos[j] << endl;
        }
    }
    

    return 0;
}
