#include <iostream>
#include "Tablero.h"
using namespace std;

int main(int argc, char** argv) {
	Tablero* ob1;
	int x, y, op, n;
	
	cout<<"Digite la posicion inicial del objeto: "<<endl;
	cout<<"Posicion X: "; cin>>x;
	cout<<"Posicion Y: "; cin>>y;
	
	ob1 = new Tablero(x,y);
	
	do{
		cout<<"\n\t:MENU:"<<endl;
		cout<<"1. Mover Arriba"<<endl;
		cout<<"2. Mover Abajo"<<endl;
		cout<<"3. Mover Derecha"<<endl;
		cout<<"4. Mover Izquierda"<<endl;
		cout<<"5. Salir";
		cout<<"Digite una opcion: "; cin>>op;
		
		if(op>=1 && op <=4){
			cout<<"\nDigite cuantas posiciones desea mover: "; cin>>n;
			
		}
		
		switch(op){
			case 1:
				ob1->moverArriba(n);
				break;
			case 2:
				ob1->moverAbajo(n);
				break;
			case 3:
				ob1->moverDerecha(n);
				break;
			case 4:
				ob1->moverIzquierda(n);
				break;
			default: cout<<"\nSe equivoco de opcion de menu"<<endl;
		}
		
		cout<<"\nPosicion Actual (X,Y): ("<<ob1->getX()<<","<<ob1->getY()<<")"<<endl;
		
	} while(op != 5);
	
	return 0;
}
