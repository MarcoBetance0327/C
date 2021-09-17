#include <iostream>

using namespace std;

int factorial(int);

int main(){
	
	cout<<"El factorial es: "<<factorial(5)<<endl;
}

int factorial(int n){
	if(n==0){
		n=1;
	}
	else{
		n *= factorial(n-1);
	}
	
	return n;
}
