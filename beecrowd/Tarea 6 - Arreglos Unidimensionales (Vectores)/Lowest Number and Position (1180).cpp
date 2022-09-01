#include <iostream>
 
using namespace std;
#define TF 1000
int main() {
    int N, X[TF], i = 1, menor, menorPos;

    cin >> N;

    cin >> X[0];
    menor = X[0];
    menorPos = 0;
    while (i<N){
        cin >> X[i];
        if(X[i] < menor){
            menor = X[i];
            menorPos = i;
        }
        i++;
    }

    cout << "Menor valor: "<<menor<<endl;
    cout << "Posicao: "<<menorPos<<endl;
    
    return 0;
}