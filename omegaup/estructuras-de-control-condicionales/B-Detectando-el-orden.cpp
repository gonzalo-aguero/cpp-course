#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if(a <= b && b <= c){
        if(a == b && b == c){
            cout << 'I' << endl;
        }else{
            cout << 'C' << endl;            
        }
    }else if(a >= b && b >= c){
        if(a == b && b == c){
            cout << 'I' << endl;
        }else{
            cout << 'D' << endl;
        }
    }else{
        cout << 'X' << endl;
    }

    return 0;
}
