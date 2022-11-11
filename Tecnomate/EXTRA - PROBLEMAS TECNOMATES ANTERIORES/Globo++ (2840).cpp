/**
 * @file Globo++ (2840).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/2840
 * @version 0.1
 * @date 2022-11-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
 
using namespace std;
 
int main() {
    int volumen, r, l;
    cin >> r >> l;
    volumen = (4*3.1415*r*r*r)/3;//volumen por globo
    cout << l/volumen << endl;
    return 0;
}