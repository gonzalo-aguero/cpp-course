/**
 * @file Below the Main Diagonal (1184).cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-30
 *  
 * @copyright Copyright (c) 2022
 * 
 * See the problem definition at https://www.beecrowd.com.br/judge/en/problems/view/1184
 */

#include <iostream>
#include <iomanip>
 
using namespace std;

#define TF 12
int main() {
    float M[TF][TF], sum = 0;
    char O;
    int i = 0, j, cant = 0;

    cin >> O;
    while(i < TF){
        j = 0;
        while (j<TF){
            cin >> M[i][j];
            j++;
        }
        i++;
    }


    i = 0;
    j = i+1;
    while (i < TF-1){
        while (j < TF){
            sum += M[j][i];
            j++;
            cant++;
        }
        i++;
        j = i+1;
    }
    
    if(O == 'S') cout << fixed << setprecision(1) << sum << endl;
    else if(O == 'M') cout << fixed << setprecision(1) << sum / cant << endl;

    return 0;
}