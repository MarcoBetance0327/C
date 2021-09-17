#include <iostream>
#include "Turismo.h"
using namespace std;

int main(int argc, char** argv) {
	Turismo* t1 = new Turismo("Toyota", "Perla", "GH89", 4);
	
	cout<<"Color: "<<t1->getColor()<<endl;
	t1->setColor("Negro");
	cout<<"Color: "<<t1->getColor()<<endl;

	cout<<"Modelo: "<<t1->retornarModelo()<<endl;
	
	return 0;
}
