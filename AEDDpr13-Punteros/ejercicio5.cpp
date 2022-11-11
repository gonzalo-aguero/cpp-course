#include <iostream>
#define SIZE 5
using namespace std;
int main(){
    char palabra[SIZE] = {'h','o','l','a', 's'};
    char* punteros[SIZE];
    
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << palabra[i];
        punteros[i] = &palabra[(SIZE-1) - i];
    }
    cout << endl;
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << *punteros[i];
    }
    cout << endl;
    
    
    return 0;
}
