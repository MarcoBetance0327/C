#include <iostream>
#include "Cuadrilatero.h"
using namespace std;

int main(int argc, char** argv) {
	Cuadrilatero* c1;
	float lado1, lado2;
	
	cout<<"Digite el lado 1: "; cin>>lado1;
	cout<<"Digite el lado 2: "; cin>>lado2;
	
	if(lado1==lado2){
		c1 = new Cuadrilatero(lado1);
	}
	else{
		c1 = new Cuadrilatero(lado1, lado2);
	}
	
	cout<<"El perimetro es: "<<c1->obtenerPerimetro()<<endl;
	cout<<"El area es: "<<c1->obtenerArea()<<endl;

	return 0;
}
