#include <iostream>
using namespace std;
int main(){
    int N[10], V;

    cin >> V;
    N[0] = V;
    cout << "N["<<0<<"] = "<<N[0]<<endl;

    for (int i = 1; i < 10; i++){
        N[i] = 2 * N[i-1];
        cout << "N["<<i<<"] = "<<N[i]<<endl;
    }

    return 0;
}
