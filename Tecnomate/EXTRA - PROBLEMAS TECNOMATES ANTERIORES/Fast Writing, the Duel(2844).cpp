/**
 * @file Fast Writing, the Duel(2844).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/2844
 * @version 0.1
 * @date 2022-11-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
 
using namespace std;
 
int main() {
    short am,rm,em,av,rv,ev, totalM, totalV;
    int s;
    cin >> am >> rm >> em; //ms
    cin >> av >> rv >> ev;//ms
    cin >> s;
    totalM = am + rm + em;
    totalV = am + rv + ev;
    cout << "M: "<<totalM<<" V: "<<totalV<<endl;
    
    if(totalM < totalV) cout << "Matheus" <<endl;
    else if(totalM > totalV) cout << "Vinicius" <<endl;
    else cout << "Empate"<<endl;

    
    return 0;
}