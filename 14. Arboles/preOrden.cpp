#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;	
};

void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);

Nodo *arbol = NULL;


int main(){
	menu();	
}

void menu(){
	int dato, opcion, cont=0;
	
	do{
		cout<<"\tMENU"<<endl;
		cout<<"1. Insertar nuevo Nodo"<<endl;
		cout<<"2. Mostrar Arbol"<<endl;
		cout<<"3. Buscar elemento en el arbol"<<endl;
		cout<<"4. Recorrer el arbol en PreOrden"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"Opcion: "; cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"\nDigite un numero: "; cin>>dato;
				insertarNodo(arbol, dato);
				cout<<"\n";
				system("pause");
				break;
			case 2:
				cout<<"\nMostrando el arbol completo: \n\n";
				mostrarArbol(arbol, cont);
				cout<<"\n";
				system("pause");
				break;
			case 3:
				cout<<"\nDigite un numero a buscar en el arbol: "; cin>>dato;
				if(busqueda(arbol, dato)==true){
					cout<<"\nEl elemento "<<dato<<" ha sido encontrado en el arbol\n";
				}
				else{
					cout<<"\nElemento no encontrado...\n";
				}
				cout<<"\n";
				system("pause");
				break;
			case 4:
				cout<<"\nRecorrido en PreOrden: ";
				preOrden(arbol);
				cout<<"\n";
				system("pause");
		}
		system("cls");
	}while(opcion!=5);
}

//Funcion para crear un nuevo nodo
Nodo *crearNodo(int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo -> dato = n;
	nuevo_nodo -> der = NULL;
	nuevo_nodo -> izq = NULL;
	
	return nuevo_nodo;
}
//Funcion para insertar elementos en el arbol
void insertarNodo(Nodo *&arbol, int n){
	if(arbol==NULL){
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}
	else{
		int valorRaiz = arbol->dato;
		if(n<valorRaiz){
			insertarNodo(arbol->izq, n);
		}
		else{
			insertarNodo(arbol->der, n);
		}
	}
}

void mostrarArbol(Nodo *arbol, int contador){
	if(arbol==NULL){
		return;
	}
	else{
		mostrarArbol(arbol->der, contador+1);
		for(int i=0;i<contador;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq, contador+1);
	}
}


bool busqueda(Nodo *arbol, int n){
	if(arbol==NULL){
		return false;
	}
	else if(arbol->dato==n){
		return true;
	}
	else if(n < arbol->dato){
		return busqueda(arbol->izq, n);
	}
	else{
		return busqueda(arbol->der, n);
	}
}

void preOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}



