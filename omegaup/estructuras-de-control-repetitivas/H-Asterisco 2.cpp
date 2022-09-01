#include <iostream>
 
using namespace std;
 
int main() {
    int n, columns = 1;
    cin >> n;

    for (size_t i = 0; i < n; i++){
        for (size_t j = 0; j < columns; j++){
            cout << "*";
        }
        cout << endl;
        columns++;
    }
    
    return 0;
}