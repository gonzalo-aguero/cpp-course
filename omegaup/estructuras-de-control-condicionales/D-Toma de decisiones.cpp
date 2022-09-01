#include <iostream>
 
using namespace std;
 
int main() {
    int a,b;

    cin >> a >> b;

    if(a+b == 5){
        b += 3;
        cout << (2*a + b) << endl;
    }else{
        a--;
        if((7*a + b)%2 == 0){
            cout << a-b << endl;
        }else{
            cout << a*b << endl;
        }
    }
}