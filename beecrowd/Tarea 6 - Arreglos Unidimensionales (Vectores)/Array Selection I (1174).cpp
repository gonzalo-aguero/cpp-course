#include <iostream>
#include <iomanip>
using namespace std;
#define TF 100
int main(){
    float A[TF] = {};
    int i = 0;

    while(i < TF){
        cin >> A[i];
        i++;
    }

    i = 0;
    while(i < TF){
        if(A[i] <= 10) cout << "A["<<i<<"] = "<< fixed << setprecision(1) <<A[i]<<endl;
        i++;
    }

    return 0;
}
