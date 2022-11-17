#include <iostream>
using namespace std;
//recursiva
bool incognita(int x, int y){
    bool bandera = false;
    
    while (x%y != 0 and !bandera)
    {
        y--;
        if(y==1){
            bandera=true;
        }
    }
    

    return bandera;
}
int main(int argc, char const *argv[]){
    int n;
    cin >> n;

    int generados = 0, numero = 2;
    while (generados < n)
    {
        if(incognita(numero, numero-1)){
            generados++;
        }
        numero++;
    }

    cout << numero-1 <<endl;
    

    return 0;
}
