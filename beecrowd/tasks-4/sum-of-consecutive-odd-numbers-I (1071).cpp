#include <iostream>
 
using namespace std;
 
int main() {
    int x, y, sum = 0;

    cin >> x >> y;

    if(x < y){
        int aux = x;
        x = y;
        y = aux;
    }

    for (int i = (y+1); i < x; i++){
        if(i%2 != 0) sum += i;
    }

    cout << sum << endl;

    return 0;
}
