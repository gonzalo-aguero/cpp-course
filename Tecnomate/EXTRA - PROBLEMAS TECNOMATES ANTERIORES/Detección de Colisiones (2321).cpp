/**
 * @file Detección de Colisiones (2321).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/2321
 * @version 0.1
 * @date 2022-11-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
 
using namespace std;
 
int main() {
    int x0, y0, x1, y1, X0,Y0,X1,Y1;
    bool intersecan = false;
    //primer rectangulo
    cin >> X0 >> Y0 >> X1 >> Y1;
    //segundo rectangulo
    cin >> x0 >> y0 >> x1 >> y1;

    if((x0 <= X1 && x0 >= X0) || (x1 <= X1 && x1 >= X0) || (x0 < X0 && x1 > X1)){//interseca con lado izquierdo rectangulo 2
        if((y0 <= Y1 && y0 >= Y0) || (y1 <= Y1 && y1 >= Y0)) intersecan = true;
        else if(y0 < Y0 && y1 > Y1) intersecan = true;//segundo rectangulo es mas alto
    }
    
    
    cout << intersecan << endl;
    
    return 0;
}