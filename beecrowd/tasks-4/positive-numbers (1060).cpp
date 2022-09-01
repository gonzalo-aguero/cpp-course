#include <iostream>
 
using namespace std;
 
int main() {
    int counter = 1, positives = 0;
    while (counter <= 6)
    {
        float number;
        cin >> number;

        if(number > 0){
            positives++;
        }

        if(number != 0){
            counter++;
        }
    }

    cout << positives << " valores positivos" << endl;
    
 
    return 0;
}