/**
 * @file Banknotes (1018).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/1018
 * @version 0.1
 * @date 2022-10-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#define cantBilletes 7
using namespace std;

int main(int argc, char const *argv[])
{
    int N, billetes[cantBilletes] = {};//100, 50, 20, 10, 5, 2, 1
    int valores[cantBilletes] = {100,50,20,10,5,2,1};
    cin >> N;

    billetes[0] = N/100;
    N -= 100 * billetes[0];
    
    billetes[1] = N/50;
    N -= 50 * billetes[1];

    billetes[2] = N/20;
    N -= 20 * billetes[2];

    billetes[3] = N/10;
    N -= 10 * billetes[3];

    billetes[4] = N/5;
    N -= 5 * billetes[4];

    billetes[5] = N/2;
    N -= 2 * billetes[5];

    billetes[6] = N/1;
    N -= 1 * billetes[6];
    
    for (size_t i = 0; i < cantBilletes; i++){
        cout << billetes[i]<<" nota(s) de R$ "<<valores[i]<<",00" << endl;
    }
    

    return 0;
}
