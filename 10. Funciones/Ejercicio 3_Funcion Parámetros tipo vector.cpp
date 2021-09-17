#include <iostream>

using namespace std;

int v[100],tam;

void datos();
int NumImpares(int v[], int);


int main()
{
	datos();
	NumImpares(v, tam);
	
}

void datos(){
	
	cout<<"Ingrese el tamanio del vector: "; cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<"."<<"Ingrese un numero: "; cin>>v[i];
	}

}

int NumImpares(int vec[], int tam){
	int vi[100];
	int j=0;
	
	for(int i=0;i<tam;i++){
		if(v[i]%2 != 0){
			vi[j]=v[i];
			j++;
		}
	}
	
	cout<<"\nLos numeros impares son: \n";
	
	for(int i=0;i<j;i++){
		cout<<vi[i]<<endl;
	}
}




