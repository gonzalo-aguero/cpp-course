#include <iostream>
#include <iomanip>
using namespace std;
#define TF 12
int main(){
    int C, i = 0, j;
    float M[TF][TF], sum = 0;
    char T;
    cin >> C >> T;

    while (i<TF){
        j = 0;
        while (j<TF){
            cin >> M[i][j];
            j++;
        }
        i++;        
    }
    

    for (size_t i = 0; i < TF; i++){
        sum += M[i][C];
    }

    if(T == 'S'){
        cout << fixed << setprecision(1) <<sum << endl;
    }else if(T == 'M'){
        cout << fixed << setprecision(1) <<(sum / TF) << endl;
    }

    return 0;
}