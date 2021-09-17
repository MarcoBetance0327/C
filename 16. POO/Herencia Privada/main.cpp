#include <iostream>
#include "Turismo.h"
#include "Deportivo.h"
using namespace std;

int main(int argc, char** argv) {
	cout<<"-Herencia Publica-"<<endl;
	Turismo* t1 = new Turismo("Toyota", "Perla", "GH89", 4);
	
	cout<<"Color: "<<t1->getColor()<<endl;
	t1->setColor("Negro");
	cout<<"Color: "<<t1->getColor()<<endl;
	cout<<"Modelo: "<<t1->retornarModelo()<<endl;
	
	cout<<"\n-Herencia Privada-"<<endl;
	Deportivo* d1 = new Deportivo("Audi", "Azul", "KP98", 10);
	
	cout<<"Cilindrada: "<<d1->getCilindrada()<<endl;
	cout<<"Marca: "<<d1->reportarMarca()<<endl;
	
	delete t1;
	delete d1;
	return 0;
}
