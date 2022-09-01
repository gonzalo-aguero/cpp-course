#include <iostream>
 
using namespace std;
 
int main() {
    int evenNumbers = 0, oddNumbers = 0, positives = 0, negatives = 0, counter = 1;

    while (counter <= 5)
    {
        int number;
        cin >> number;

        if(number > 0){
            positives++;
        }else if(number < 0){
            negatives++;
        }

        if(number%2 == 0){
            evenNumbers++;
        }else if(number%2 == 1){
            oddNumbers++;
        }

        counter++;
    }
    
    cout << evenNumbers << " valor(es) par(es)" << endl;
    cout << oddNumbers << " valor(es) impar(es)" << endl;
    cout << positives << " valor(es) positivo(s)" << endl;
    cout << negatives << " valor(es) negativo(s)" << endl;

    return 0;
}