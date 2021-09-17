#include <iostream>

using namespace std;

int vec[100], tam, suma=0;

void Datos();
int CalcSuma(int vec[], int);


int main(){
	Datos();
	CalcSuma(vec,tam);
	
	cout<<"\nLa suma de los elementos es: "<<suma<<" ";
}


void Datos(){
	cout<<"Ingrese el tamaño del vector: "; cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<"Ingrese un numero: "; cin>>vec[i];
	}
	
}

int CalcSuma(int vec[],int sum){
	
	for(int i=0;i<tam;i++){
		suma +=vec[i];
	}
	
	return suma;
}

