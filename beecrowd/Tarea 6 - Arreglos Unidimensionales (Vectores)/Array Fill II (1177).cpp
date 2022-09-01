#include <iostream>
using namespace std;

#define TF 1000
int main(){
    int T, N[TF] = {}, num = 0;
    cin >> T;
    for (size_t i = 0; i < TF; i++){
        N[i] = num;
        cout << "N["<<i<<"] = "<<N[i]<<endl;
        
        if(num < (T-1)) num++;
        else num = 0;
    }
    
    return 0;
}