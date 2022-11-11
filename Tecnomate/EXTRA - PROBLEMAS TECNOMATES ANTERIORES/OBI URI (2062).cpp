/**
 * @file OBI URI (2062).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/2062
 * @version 0.1
 * @date 2022-11-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
 
int main() {
    short numWords, size, test = 0;
    string text;

    cin >> numWords;
    while (test < numWords){   
        cin >> text;
        size = text.size();

        if(text[0] == 'O' && text[1] == 'B' && text[3] == '\0'){
            if(text[2] != 'I') text[2] = 'I';
        }else if(text[0] == 'U' && text[1] == 'R' && text[3] == '\0'){
            if(text[2] != 'I') text[2] = 'I';
        }

        if(test == numWords-1) cout << text << endl;
        else cout << text << " ";
        test++;
    }
    
    return 0;
}