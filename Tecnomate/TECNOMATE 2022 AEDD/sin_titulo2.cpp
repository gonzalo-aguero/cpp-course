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
		potencia=pow(2,n)*pow(2,n)-1;
//		if(n==0){
//			
//		}
//		for (int j = 0; j <=n; j++)
//		{
//		potencia += pow(2, j);
//		}
		potenciatotal=potencia%((long)pow(10,9)+7);
		cout<<potenciatotal<<endl;
		potencia=0;
		
	}
	return 0;
}
	
