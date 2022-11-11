/**
 * @file Time Conversion (1019).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/1019
 * @version 0.1
 * @date 2022-10-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int h = 0, m = 0, s = 0;
    cin >> s;

    while (s >= 3600){
        h++;
        s -= 3600;
    }
    while (s >= 60){
        m++;
        s -= 60;
    }
    cout << h<<":"<<m<<":"<<s<<endl;
    

    return 0;
}
