#include <iostream>
 
using namespace std;
 
int main() {
    int n, counter = 0, number = 0;
    bool asc = true;
    cin >> n;

    while (counter < n)
    {
        if(asc && number < 5){
            number++;
        }else{
            asc = false;
            if(!asc && number > 1){
                number--;
            }else{
                asc = true;
                number++;
            }
        }

        cout << number << " ";
        counter++;
    }
    
    
    return 0;
}