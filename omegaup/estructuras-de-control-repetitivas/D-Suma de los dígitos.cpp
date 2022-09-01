#include <iostream>
 
using namespace std;
 
int main() {
    int n, sum = 0;
    cin >> n;

    while(n > 0){
        sum += n%10;// sum the first digit.
        n /= 10;
    }

    cout << sum << endl;
    return 0;
}