#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	int t, n;
	long potencia = 0,potenciatotal;
	
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		if(n==0){
			
		}
		for (int j = 0; j <n; j++)
		{
		potencia += pow(j, 2);
		}
		potenciatotal=potencia%(long)(pow(10,9)+7);
		cout<<potenciatotal<<endl;
		
	}
	return 0;
}
	
 