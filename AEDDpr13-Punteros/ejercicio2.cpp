#include <iostream>
#define SIZE 5
using namespace std;
int main(){
    float numeros[SIZE] =  {0.1, 0.2, 0.3, 0.4, 0.5};
    float* pnum;//b
    for (size_t i = 0; i < SIZE; i++){//c
        cout << "Elemento ["<<i<<"]: "<<numeros[i] <<endl;
    }

    //d
    pnum = &numeros[0];
    for (size_t i = 0; i <= SIZE; i++) cout << *pnum+i << endl;
    

    cout << "DIreccion referenciada por pnum+3: "<<pnum+3 <<endl;
    cout << "Su valor es: "<< *(pnum+3)<<endl;

    pnum = &numeros[3];
    cout << "DIreccion referenciada por pnum+3: "<<pnum-2 <<endl;
    cout << "Su valor es: "<< *(pnum-2)<<endl;

    return 0;
}
