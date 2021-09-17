#include <iostream>

using namespace std;

int fibonacci(int);

int main(){
	int nE;
	
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>nE;
	}while(nE<=0);
	cout<<"\nSerie Fibonacci: ";
	for(int i=0;i<nE;i++){
		cout<<fibonacci(i)<<" , ";
	}
}


int fibonacci(int n){
	if(n<2){
		return n;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
