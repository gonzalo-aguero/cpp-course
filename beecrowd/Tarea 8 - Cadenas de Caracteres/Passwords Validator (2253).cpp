/**
 * @file Passwords Validator (2253).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/2253
 * @version 0.1
 * @date 2022-10-14
 * 
 * @copyright Copyright (c) 2022 
 */
#include <iostream>
#include <string>

using namespace std;
/** 
 * @param a Char to evaluate
 * @return true if a is any of the following: , . ' " _ - ; :
 */
bool isSpecialChar(char a){
    bool result = false;
    switch (a){
        case ',': result = true; break;
        case '.': result = true; break;
        case ':': result = true; break;
        case ';': result = true; break;
        case '\'': result = true; break;
        case '"': result = true; break;
        case '-': result = true; break;
        case '_': result = true; break;
    }
    return result;
}
int main(){
    bool uppercase, lowercase, number, bandera, space, specialChars;
    string S;
    int s_size, i;
    
    while(!cin.eof()){
        getline(cin, S);
        s_size = S.size();
        if(5 < s_size && s_size < 33 ){
            i = 0;
            uppercase = false, lowercase = false, number = false, bandera = true, space = false, specialChars = false;
            while (bandera && i < s_size){
                if(isupper(S[i])) uppercase = true;
                if(islower(S[i])) lowercase = true;
                if(isdigit(S[i])) number = true;
                if(isspace(S[i])) space = true;
                if(isSpecialChar(S[i])) specialChars = true;

                if(specialChars || space || (uppercase && lowercase && number)) bandera = false;
                i++;
            }
            
            if(uppercase && lowercase 
                && number 
                && !space
                && !specialChars ) cout << "Senha valida." << endl;
            else cout << "Senha invalida." << endl;
        }else{
            cout << "Senha invalida." << endl;
        }
    }
    return 0;
}
