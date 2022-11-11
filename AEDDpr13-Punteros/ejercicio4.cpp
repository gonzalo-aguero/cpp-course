#include <iostream>
#define SIZE 10
using namespace std;
int main(){
    int elementos[SIZE] ={1, 2, 3, 4, 4, 7, 8, 9, 5, 4};
    int* punteros[SIZE]; 
    for (size_t i = 0; i < SIZE; i++)
    {
        punteros[i] = &elementos[i];
        cout << "Direccion de "<<elementos[i]<<": "<<punteros[i]<<endl;
    }
    

    return 0;
}
