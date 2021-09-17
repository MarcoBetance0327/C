#include <iostream>
#include "ClaseDerivada.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ClaseDerivada* ob1 = new ClaseDerivada(5,10);
	
	cout<<endl;
	
	delete ob1;
	
	return 0;
}
