#include <iostream>
#include "Ordenar.h"
using namespace std;

template <typename T>
void pedirDatos(T *arreglo, int n){
	for(int i=0; i<n; i++){
		cout<<"Digite un elemento del arreglo ["<<i<<"]:";
		cin>>arreglo[i];
	}
}

template <typename T>
void mostrarArreglo(T *arreglo, int n){
	for(int i=0; i<n; i++){
		cout<<"Elemento["<<i<<"]: "<<arreglo[i]<<endl;
	}
}

int main(int argc, char** argv) {
	int n;
	
	cout<<"Digite la cantidad de elementos del arreglo: ";
	cin>>n;
	
	int *elementos = new int(n);
	
	cout<<"\nPidiendo los elementos del arreglo: "<<endl;
	pedirDatos(elementos, n);
	
	ordenarAscendente(elementos, n);
	mostrarArreglo(elementos, n);
	ordenarDescendente(elementos, n);
	mostrarArreglo(elementos, n);

	
	delete[] elementos;
	return 0;
}
