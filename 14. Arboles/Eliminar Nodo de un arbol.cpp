#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;	
	Nodo *padre;
};

void menu();
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *); 
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int );
void eliminarNodo(Nodo *);
void remplazar(Nodo *, Nodo *);
Nodo *minimo(Nodo *);
void destruir(Nodo *);

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
		cout<<"5. Recorrer el arbol en InOrden"<<endl;
		cout<<"6. Recorrer el arbol en PostOrden"<<endl;
		cout<<"7. Eliminar un nodo del arbol"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Opcion: "; cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"\nDigite un numero: "; cin>>dato;
				insertarNodo(arbol, dato, NULL);
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
				break;
			case 5:
				cout<<"\nRecorrido en InOrden: ";
				inOrden(arbol);
				cout<<"\n";
				system("pause");
				break;
			case 6:
				cout<<"\nRecorrido en PostOrden: ";
				postOrden(arbol);
				cout<<"\n";
				system("pause");
				break;
			case 7:
				cout<<"\nDigite el numero a eliminar: "; cin>>dato;
				eliminar(arbol, dato);
				cout<<"\n";
				system("pause");
				break;
		}
		system("cls");
	}while(opcion!=8);
}

//Funcion para crear un nuevo nodo
Nodo *crearNodo(int n, Nodo *padre){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo -> dato = n;
	nuevo_nodo -> der = NULL;
	nuevo_nodo -> izq = NULL;
	nuevo_nodo ->padre = padre;
	
	return nuevo_nodo;
}
//Funcion para insertar elementos en el arbol
void insertarNodo(Nodo *&arbol, int n, Nodo *padre){
	if(arbol==NULL){
		Nodo *nuevo_nodo = crearNodo(n, padre);
		arbol = nuevo_nodo;
	}
	else{
		int valorRaiz = arbol->dato;
		if(n<valorRaiz){
			insertarNodo(arbol->izq, n, arbol);
		}
		else{
			insertarNodo(arbol->der, n, arbol);
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

void inOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}
}

void postOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}

void eliminar(Nodo *arbol, int n){
	if(arbol==NULL){
		return;
		
	}
	else if(n < arbol->dato){
		eliminar(arbol->izq, n);
	}
	else if(n > arbol->dato){
		eliminar(arbol->der, n);
	}
	else{
		eliminarNodo(arbol);
	}
}

Nodo *minimo(Nodo *arbol){
	if(arbol==NULL){
		return NULL;
	}
	if(arbol->izq){
		return minimo(arbol->izq);
	}
	else{
		return arbol;
	}
}

void remplazar(Nodo *arbol, Nodo *nuevoNodo){
	if(arbol->padre){
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->der = nuevoNodo;
		}
	}
	if(nuevoNodo){
		nuevoNodo->padre = arbol->padre;
	}
}

void destruir(Nodo *nodo){
	nodo->izq=NULL;
	nodo->der=NULL;
	
	delete nodo;
}

void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->izq && nodoEliminar->der){
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	}
	else if(nodoEliminar->izq){
		remplazar(nodoEliminar, nodoEliminar->izq);
		destruir(nodoEliminar);
	}
	else if(nodoEliminar->der){
		remplazar(nodoEliminar, nodoEliminar->der);
		destruir(nodoEliminar);
	}
	else{
		remplazar(nodoEliminar, NULL);
		destruir(nodoEliminar);
	}
}
