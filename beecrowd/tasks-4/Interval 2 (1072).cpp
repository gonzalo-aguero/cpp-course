#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, X, counter = 1, included = 0, noIncluded = 0; //included and no included in the interval [10,20]

    cin >> N;

    while(counter <= N){
        cin >> X;
        if(X < 10 || X > 20){
            noIncluded++;
        }else{
            included++;
        }

        counter++;
    }

    cout << included << " in" << endl << noIncluded << " out" << endl;

    return 0;
}
