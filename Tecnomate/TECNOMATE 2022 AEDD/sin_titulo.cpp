#include <iostream>
#define N 20
using namespace std;

int main(int argc, char *argv[]) {
	int matriz[N][N];
	int m;
	cin>>m;
	for(int i=0;i<m;i++) { 
		for(int j=m-1;j>=0;j--) {  
			cin>>matriz[i][j];
			if(matriz[i][j]==0){
				matriz[i][j]=1;
			}else{
				matriz[i][j]=0;
			}
			
		}
	}
	
	for(int i=0;i<m;i++) { 
		for(int j=0;j<m;j++) { 
			if(j == m-1) cout<<matriz[i][j] << endl;
			else cout<<matriz[i][j]<<" ";
		}
	}
	
	return 0;
}

