#include <iostream>
 
using namespace std;
 
int main() {
    int n, num, mayor = 0, counter = 1;

    cin >> n;

    while(counter <= n){
        cin >> num;
        if(num > mayor) mayor = num;
        counter++;
    }
    
    cout << mayor << endl;

    return 0;
}