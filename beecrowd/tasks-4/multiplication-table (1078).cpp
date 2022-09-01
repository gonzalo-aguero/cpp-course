#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, counter = 1;

    cin >> N;

    while(counter <= 10){
        int result = counter * N;
        cout << counter << " x " << N << " = " << result << endl;
        counter++;
    }

    return 0;
}
