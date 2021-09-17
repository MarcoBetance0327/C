#include <iostream>

using namespace std;

int vec[100], tam;

void Datos();
int Ordenamiento(int vec[], int);

int main(){
	
	Datos();
	Ordenamiento(vec, tam);
	
	return 0;
}

void Datos(){
	cout<<"Ingrese el tamaño del vector: "; cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<"Ingrese un numero: "; cin>>vec[i];
	}
	
}

int Ordenamiento(int vec[],int tam){
	
	char band = 'F';
	
	int i=0;
	while((band=='F')&&(i<tam-1)){
		if(vec[i]>vec[i+1]){
			band = 'V';
		}
		i++;
	}
	
	if(band=='F'){
		cout<<"El arreglo esta ordenado crecientemente "<<endl;
	}
	else{
		cout<<"El arreglo no esta ordenado crecientemente "<<endl;

	}
	
}
