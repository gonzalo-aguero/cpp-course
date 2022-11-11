/**
 * @file What is the Fastest? (2175).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/2175
 * @version 0.1
 * @date 2022-11-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
 
using namespace std;
 
int main() {
    float O,B,I;
    cin >> O >> B >> I;
    if(O < B && O < I) cout << "Otavio" <<endl;
    if(B < O && B < I) cout << "Bruno" <<endl;
    if(I < O && I < B) cout << "Ian" << endl;
    if(O == B || O == I || B == I) cout <<"Empate"<<endl;
    
    return 0;
}