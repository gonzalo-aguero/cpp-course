#include <iostream>
 
using namespace std;
 
int main() {
    int counter = 1;
    while (counter <= 100)
    {
        if(counter%2 == 0){
            //it's a even number.
            cout << counter << endl;
        }

        counter++;
    }
    
 
    return 0;
}