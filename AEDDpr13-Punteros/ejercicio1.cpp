#include <iostream>
using namespace std;
int main(){
    float num1 = 3.1415926, num2 = 0.12345;
    
    float* pnum;//a
    pnum = &num1;//b
    cout << "El valor de la variable apuntada por pnum es: "<< *pnum << endl;//c
    num2 = *pnum;//d
    cout << "El valor de num2 es: " << num2 << endl;//e
    
    cout << "Direccion num2: "<<&num2<<endl;
    cout << "Direccion en pnum: "<<pnum<<endl;
    return 0;
}
