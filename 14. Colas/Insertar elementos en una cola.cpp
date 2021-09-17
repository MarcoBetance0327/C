#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia (Nodo *);

int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	cout<<"Ingrese un numero: "; cin>>dato;
	insertarCola(frente,fin,dato);
	
	return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin ->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	
	cout<<"\tElemento "<<n<<" agregado a la cola..."<<endl;
	
}

bool cola_vacia(Nodo *frente){
	return (frente==NULL)? true : false;
}
