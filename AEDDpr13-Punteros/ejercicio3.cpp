#include <iostream>
#include <ctime>
#define SIZE 10
using namespace std;
int main(){
    int numeros[SIZE];
    int* punteros[SIZE];
    srand(time(NULL));
    for (size_t i = 0; i < SIZE; i++){
        numeros[i] = rand() % 100 +1;
        punteros[i] = &numeros[i];
        cout << "Valor: "<< numeros[i] << " Dirección: "<<punteros[i]<<endl;
    } 

    return 0;
}
