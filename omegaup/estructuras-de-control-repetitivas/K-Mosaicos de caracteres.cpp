#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;

    for (size_t i = 1; i <= n; i++){
        if(i%2 == 0) cout << "#";
        else cout << "-";
    }

    cout << endl;

    for (size_t i = 1; i <= n; i++){
        if(i%2 == 0) cout << "-";
        else cout << "#";
    }
    cout << endl;
    
    return 0;
}