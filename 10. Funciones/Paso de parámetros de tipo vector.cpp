#include <iostream>

using namespace std;

void cuadrado(int vec[], int);
void muestra(int vec[],int);

void cuadrado(int vec[], int tam){
	
	for(int i=0;i<tam;i++){
		vec[i]*=vec[i];
	}

}

void muestra(int vec[], int tam){
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
}

int main(){

const int TAM = 5;
int vec[TAM] = {1,2,3,4,5};

cuadrado(vec,TAM);
muestra(vec,TAM);
}
