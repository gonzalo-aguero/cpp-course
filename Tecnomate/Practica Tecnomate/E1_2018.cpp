/**
 * @file E1_2018.cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/es/problems/view/2670?origem=1
 * @version 0.1
 * @date 2022-11-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int main() {
    int a1,a2,a3, m1,m2,m3, menorTiempo;
    cin >> a1 >> a2 >> a3;

    //maquina en piso 1
    m1 = 0;
    m2 = 2*a2;
    m3 = 4*a3;
    menorTiempo = m2+m3;

    //maquina en piso 2
    m1 = 2*a1;
    m2 = 0;
    m3 = 2*a3;
    if(m1+m3 < menorTiempo) menorTiempo = m1+m3;

    //maquina en piso 3
    m1 = 4*a1;
    m2 = 2*a2;
    m3 = 0;
    if(m1+m2 < menorTiempo) menorTiempo = m1+m2;

    cout << menorTiempo << endl;
    return 0;
}