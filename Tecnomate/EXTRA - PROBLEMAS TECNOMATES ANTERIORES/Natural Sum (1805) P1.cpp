/**
 * @file Natural Sum (1805) P1.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
 
using namespace std;
 
int main() {
    long long int a, b, sumA, sumB;
    cin >> a >> b;
    if(a > b){
        int aux = a;
        a = b;
        b = aux;
    }

    sumB = (b*(b+1))/2;
    sumA = ((a-1)*a)/2;
    cout << sumB - sumA << endl;

    return 0;
}