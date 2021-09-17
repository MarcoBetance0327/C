#include <iostream>
#include "HidroAvion.h"
using namespace std;

int main(int argc, char** argv) {
	HidroAvion* ob1 = new HidroAvion("Veloz12", "HA99", "123OP");
	
	ob1->mostrarDatos();
	cout<<"\n";
	
	ob1->indicarBarco();
	ob1->indicarAvion();
	
	return 0;
}
