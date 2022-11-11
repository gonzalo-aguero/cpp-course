/**
 * @file Time Zone (2057).cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/en/problems/view/2057
 * @version 0.1
 * @date 2022-11-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
 
using namespace std;
 
int main() {
    short s,t,f, hour;
    cin >> s >> t >> f;
    hour = s+t+f;
    if(hour > 24) hour -= 24; 
    if(hour < 0) hour += 24; 
    if(hour == 24) hour = 0;
    cout << hour << endl;
    return 0;
}