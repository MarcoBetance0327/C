#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};


void agregarPila(Nodo *&, char);
void sacarPila(Nodo *&, char &);

int main(){
	Nodo *pila = NULL;	
	int opc;
	char car,rpt;
	do{
	
		cout<<"\n1.Insertar un caracter a la pila "<<endl;
		cout<<"2.Mostrar todos los elementos de la pila "<<endl;
		cout<<"3. Salir "<<endl;
		cout<<"Seleccione una opcion: "; cin>>opc;
		
		switch(opc)
		{
			case 1:
				cout<<"Ingrese un caracter: "; cin>>car;
				agregarPila(pila, car);
				break;
			case 2:
				cout<<"\nSacando todos los elementos de PILA "<<endl;
				while(pila!=NULL){
					sacarPila(pila,car);
					if(pila!=NULL){
						cout<<car<<" , ";
					}
					else{
						cout<<car<<" . ";
					}
				}
				main();
				break;
			case 3:
				break;
		}
	}while(opc!=3);	
}

void agregarPila(Nodo *&pila, char n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;
}

void sacarPila(Nodo *&pila, char &n){
	Nodo *aux = pila;
	n = aux -> dato;
	pila = aux -> siguiente;
	delete aux;
}

