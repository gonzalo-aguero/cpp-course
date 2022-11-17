#include <iostream>
using namespace std;
//Sembradora
int main(int argc, char const *argv[]){
    int n, m, numero;
    long long int contador = 0, k;
    int campo[100][100] = {};
    char pasadaPor;

    cin >> n >> m;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> pasadaPor;
        cin >> numero;
        numero--;
        
        if(pasadaPor == 'C'){//pasada por columna numero

            for (int j = 1; j <= m; j++){
                if(campo[numero][j] != 1) campo[numero][j] = 1;
                else {
                    contador++;
                }
            }

        }else if(pasadaPor == 'F'){//pasada por fila numero
            
            for (int j = 1; j <= n; j++){
                if(campo[j][numero] != 1) campo[j][numero] = 1;
                else {
                    contador++;
                }
            }
        }
    }
    
    cout << contador << endl;
    return 0;
}
