/**
 * @file Multiples of 13 (1132).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/1132
 * @version 0.1
 * @date 2022-10-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(){
    int x, y, sum = 0, number;
    cin >> x >> y;
    
    if(x > y) {
        int aux = x;
        x = y;
        y = aux;
    }

    //No eficiente
    cout << "algoritmo 1:"<<endl;
    number = x;

    while (number <= y){
        if(number%13 != 0) sum += number;
        number++;
    }
    cout << sum<<endl;
    sum =0;
    cout << "algoritmo 2:"<<endl;
    int sum1, sum2, sumMultiplos, primerMultiplo, ultimoMultiplo, cantMultiplos;

    //Suma de los no multiplos de 13:
    if(x%13 == 0) primerMultiplo = x;
    else primerMultiplo = x+(13-(x%13));

    if(y%13 == 0) ultimoMultiplo = y;
    else ultimoMultiplo = y-(y%13);

    cantMultiplos = (float)((y-x)/13) + 1;
    cout <<"primerMultiplo: "<<primerMultiplo<<endl;
    cout <<"ultimoMultiplo: "<<ultimoMultiplo<<endl;
    cout << "multiplos:"<<cantMultiplos<<endl;
    sumMultiplos = cantMultiplos * (primerMultiplo + ultimoMultiplo) / 2;//comprobar



    cout << "sumMultiplos" <<sumMultiplos<<endl;
    // x=x-1;
    cout << "X: "<<x<<endl;
    cout << "Y: "<<y<<endl;
    sum1= x*(x+1)/2;// from 0 to x
    sum2= y*(y+1)/2;// from 0 to y
    
    cout << "sum1:"<<sum1<<endl;
    cout << "sum2:"<<sum2<<endl;
    cout << "sum2 - sum1:"<<sum2-sum1<<endl;
    sum = (sum2 - sum1) - sumMultiplos;
    
    cout << sum << endl;

    return 0;
}
