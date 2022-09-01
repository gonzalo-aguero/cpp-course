#include <iostream>
#define N 20
using namespace std;

int agregarmultiplo(int a[], int& tl){
	int insertados=0;
	for(int i=0;i<tl;i++) { 
		if(a[i]%100==0){
			a[i+2]=a[i+1];
			a[i+1]=a[i]+1;
			i++;
			insertados++;
			tl++;
		}
		
	}
	return insertados;
}
	
int main(int argc, char *argv[]) {
	int inserciones, tl=3;
	int a[N];
	a[0]=2;
	a[1]=500;
	a[2]=4000;

	
	inserciones=agregarmultiplo(a,tl);
	
	cout<<"cant de inserciones "<<inserciones<<" tamaño lógico "<<tl<<endl;
	for(int k=0;k<tl;k++) { 
		cout<<"nuevo valor"<<a[k]<<endl;
	}
	
	
	return 0;
}

