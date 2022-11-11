/**
 * @file Functions (1555).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/1555
 * @version 0.1
 * @date 2022-10-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
 
using namespace std;

int r(int x, int y){
    return (3*x)*(3*x)+y*y;
}
int b(int x, int y){
    return 2*(x*x) + (5*y)*(5*y);
}
int c(int x, int y){
    return -100 * x + y*y*y;
}
int main() {
    int N, x, y, i = 0;

    cin >> N;
    while (i < N){
        cin >> x >> y;

        cout << r(x,y)<<endl;
        cout << b(x,y)<<endl;
        cout << c(x,y)<<endl;
        if(r(x,y) > b(x,y)  && r(x,y) > c(x,y)) cout << "Rafael ganhou"<<endl;
        if(b(x,y) > r(x,y)  && b(x,y) > c(x,y)) cout << "Beto ganhou"<<endl;
        if(c(x,y) > b(x,y)  && c(x,y) > r(x,y)) cout << "Carlos ganhou"<<endl;
        i++;
    }
    

    return 0;
}