#include <iostream>

using namespace std;

int suma(int);

int main(){
	
	cout<<"Suma: "<<suma(10)<<endl;
}

int suma(int n){
	if(n==1){
		n=1;
	}
	else{
		n += suma(n-1);
	}
	
	return n;
}
