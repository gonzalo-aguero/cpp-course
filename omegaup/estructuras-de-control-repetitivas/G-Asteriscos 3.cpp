#include <iostream>
 
using namespace std;
 
int main() {
    int n,m = 1, columns, middle;
    cin >> n;

    columns = 2*n -1;
    middle = (columns-1)/2 + 1;

    cout << "columns: " << columns << endl;
    cout << "medio: " << middle << endl;
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            int pos = j+1; //column position
            if(pos == middle || pos == 1 || pos >= (middle-(i+1)) || pos <= (middle+(i+1)) ) cout << "*";
            else cout << " ";
        }
        m += 2;
        cout << endl;
    }
    
    return 0;
}