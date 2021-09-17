#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void Agregar(Nodo *&, Nodo *&, char);
void Suprimir(Nodo *&, Nodo *&, char &);
bool cola_vacia(Nodo *);

int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int opc;
	char dato, rpt;
	do{
		cout<<"-----MENU-----"<<endl;
		cout<<"1. Insertar un caracter a una cola "<<endl;
		cout<<"2. Mostrar todos los elementos de la cola"<<endl;
		cout<<"3. salir"<<endl;
		cout<<"Digite la opcion: "; cin>>opc;
		
		switch(opc){
			case 1: 
				do{
					cout<<"Digite un caracter para agregar a la cola: "; cin>>dato;
					Agregar(frente, fin, dato);
					cout<<"\tDesea agregar otro elemento a la PILA (S/N)? "; cin>>rpt;
				}while((rpt == 'S') || (rpt =='s'));
				break;
			case 2:
				while(frente != NULL){
					Suprimir(frente, fin, dato);
					
					if(frente != NULL){
						cout<<dato<<" , ";
					}
					else{
						cout<<dato<<" . "<<endl;
					}
				}
				break;
			case 3:
				break;
		}
	}while(opc!=3);
}

void Agregar(Nodo *&frente, Nodo *&fin, char n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin -> siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	
	cout<<"Elemento "<<n<<" agregado a la cola "<<endl;
}

bool cola_vacia(Nodo *frente){
	return (frente==NULL)? true : false;
}

void Suprimir(Nodo *&frente, Nodo *&fin, char &n){
	n = frente -> dato;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente -> siguiente;
	}
	delete aux;
	
}
