#include <iostream>

using namespace std;

int main() {
    int a, b, c, movimientos = 0;

    cin >> a >> b >> c;

    if(a <= b && a <= c){
        // a, b, c || a, c, b

        if(b <= c){
            // a, b, c
        }else{
            // a, c, b
            movimientos++;
        }
    }else{
        if(b <= a && a <= c){
            //b, a, c
            movimientos++;
        }else{
            if(c <= a && a <= b){
                //c, a, b
                movimientos++;
                movimientos++;
            }else{
                if(b <= a && c <= a){
                    // b, c, a || c, b, a
                    if(b <= c){
                        // b, c, a
                        movimientos++;
                    }else{
                        // c, b, a
                    }
                    movimientos++;
                }
            }
        }
    }
	
    cout << movimientos << endl;

    return 0;
}
