/**
 * @file Passwords Validator (2253).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/1094
 * @version 0.1
 * @date 2022-10-14
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]){
    int amount, N, C = 0, R = 0, S = 0, total = 0;
    char type;

    cin >> N;
    for (size_t i = 0; i < N; i++){
        cin >> amount >> type;
        switch (type){
            case 'C': C += amount; break;
            case 'R': R += amount; break;
            case 'S': S += amount; break;
        }
    }
    total = C+R+S;

    cout << "Total: "<<total<<" cobaias"<<endl;
    cout << "Total de coelhos: "<<C<<endl;
    cout << "Total de ratos: "<<R<<endl;
    cout << "Total de sapos: "<<S<<endl;
    cout << "Percentual de coelhos: "<< fixed << setprecision(2) << (float) C/ (float) total*100<<" %"<<endl;
    cout << "Percentual de ratos: "<< fixed << setprecision(2) <<(float)  R/(float) total*100<<" %"<<endl;
    cout << "Percentual de sapos: "<< fixed << setprecision(2) <<(float) S/(float) total*100<<" %"<<endl;
    
    return 0;
}
