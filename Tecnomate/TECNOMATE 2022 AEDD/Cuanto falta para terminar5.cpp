#include <iostream>
//Cuanto falta para terminar?
using namespace std;
int main(int argc, char const *argv[]){
    int d1, n1, d2, n2, den, num, cantPags, x, cantPagsFaltantes;
    
    cin >> n1 >> d1 >> cantPags >> n2 >> d2;
    
    
    den = d1*d2;
    num=n1*d2+n2*d1;
    
   

    x=(20*den)/(den-num);
    
    cantPagsFaltantes = (x / d2) + cantPags;
    
    cout << x << endl;
    cout << cantPagsFaltantes << endl;

    return 0;
}
