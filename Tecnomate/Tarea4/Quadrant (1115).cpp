/**
 * @file Quadrant (1115).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/1115
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int x, y;
    cin >> x >> y;
    while(x != 0 && y != 0){
        if(x > 0){
            if(y > 0) cout << "primeiro"<<endl;
            else cout << "quarto"<<endl;
        }else{
            if(y > 0) cout << "segundo"<<endl;
            else cout << "terceiro"<<endl;
        }
        cin >> x >> y;
    }

    return 0;
}