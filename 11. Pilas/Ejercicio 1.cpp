#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);


int main(){
	Nodo *pila = NULL;
	int dato;
	char rpt;
	
	do{
		cout<<"Ingrese un numero: "; cin>>dato;
		agregarPila(pila, dato);
		cout<<"Desea agregar otro elemento a la PILA (S/N)? "; cin>>rpt;
	}while((rpt == 'S')||(rpt=='s'));
	
	cout<<"\nSacando todos los elementos de la PILA ";
	
	while(pila!=NULL){
		sacarPila(pila, dato);
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<" . ";
		}
	}
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo ->dato=n;
	nuevo_nodo ->siguiente=pila;
	pila = nuevo_nodo;
	cout<<"\tElemento "<<n<<" agregado a la pila correctamente "<<endl;
}

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}





