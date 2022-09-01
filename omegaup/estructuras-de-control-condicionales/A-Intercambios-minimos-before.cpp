#include <iostream>

using namespace std;

int main() {
    int a, b, c, movimientos = 0;

    cin >> a >> b >> c;

    if(a <= b && a <= c){
        // a, b, c || a, c, b
        // cout << a << endl;

        if(b <= c){
            // a, b, c
            // cout << b << endl;
            // cout << c << endl;
        }else{
            // a, c, b
            // cout << c << endl;
            // cout << b << endl;
            movimientos++;
        }
    }else{
        if(b <= a && a <= c){
            //b, a, c
            // cout << b << endl;
            // cout << a << endl;
            // cout << c << endl;
            movimientos++;
        }else{
            if(c <= a && a <= b){
                //c, a, b
                // cout << c << endl;
                // cout << a << endl;
                // cout << b << endl;
                movimientos++;
                movimientos++;
            }else{
                if(b <= a && c <= a){
                    // b, c, a || c, b, a
                    if(b <= c){
                        // b, c, a
                        // cout << b << endl;
                        // cout << c << endl;
                        movimientos++;
                    }else{
                        // c, b, a
                        // cout << c << endl;
                        // cout << b << endl;
                    }

                    // cout << a << endl;
                    movimientos++;
                }
            }
        }
    }
	
    cout << movimientos << endl;

    return 0;
}
