#include <iostream>
#include <math.h>

using namespace std;

int potencia(int, int);

int main(){
	int n, p;
	
	cout<<"Digite un numero: "; cin>>n;
	cout<<"Digite la potencia deseada: "; cin>>p;
	
		
	cout<<"El numero es "<<n<<" y elevado a "<<p<<" es: "<<potencia(n,p)<<endl;
}

int potencia(int x, int y){
	int pot;
	
	if(y==1){
		pot = x;
	}
	else{
		pot = x * potencia(x,y-1);
	}
	
}
