/**
 * @file Fixed Password (1114).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/1114
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int correctPass = 2002, typedPass;
    cin >> typedPass;
    while(!(typedPass == correctPass)){
        cout << "Senha Invalida" << endl;
        cin >> typedPass;
    }

    cout << "Acesso Permitido" << endl;
    return 0;
}
