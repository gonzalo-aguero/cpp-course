#include <iostream>

using namespace std;

int main(){
    double A, B, C, aux;

    cin >> A >> B >> C;

    //validate A, B, C > 0
    if(A <= 0 || B <= 0 || C <= 0){
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }


    // Arrange them in decreasing order
    if(A > B && A > C){
        if(B < C){
            aux = B;
            B = C;
            C = aux;
        }
    }else{
        if(A > B){
            if(B < C){
                aux = B;
                B = C;
                C = aux;

                if(A < B){
                    aux = A;
                    A = B;
                    B = aux;
                }
            }

            if(A < C){
                aux = A;
                A = C;
                C = aux;
            }
        }else{
            aux = A;
            A = B;
            B = aux;

            if(B < C){
                aux = B;
                B = C;
                C = aux;

                if(A < B){
                    aux = A;
                    A = B;
                    B = aux;
                }
            }
        }
    }

    if(A >= (B + C)){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else{
        if( A*A == B*B + C*C){
            cout << "TRIANGULO RETANGULO" << endl;
        }else{
            if(A*A > B*B + C*C){
                cout << "TRIANGULO OBTUSANGULO" << endl;
            }else{
                if(A*A < B*B + C*C){
                    cout << "TRIANGULO ACUTANGULO" << endl;
                }
            }

            if(A == B && B == C){
                cout << "TRIANGULO EQUILATERO" << endl;
            }else{
                if(A == B || B == C || A == C){
                    cout << "TRIANGULO ISOSCELES" << endl;
                }
            }
        }
    }

    return 0;
}