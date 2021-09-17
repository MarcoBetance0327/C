#include <iostream>
#include <stdlib.h>
#include "Diaanio.h"

using namespace std;

int main(int argc, char** argv) {
	DiaAnio* hoy;
	DiaAnio* cumple;
	int d, m;
	
	cout<<"Introduzca la fecha de hoy, dia: "; cin>>d;
	cout<<"Introduzca el numero de mes: "; cin>>m;
	
	hoy = new DiaAnio(d,m);
	
	cout<<"\nIntroduzca la fecha de su cumpleanios, dia: "; cin>>d;
	cout<<"Introduca el numero de mes: "; cin>>m;
	
	cumple = new DiaAnio(d, m);
	
	hoy->visualizar();
	cout<<endl;
	cumple->visualizar();
	
	if(hoy->igual(*cumple)){
		cout<<"Feliz cumpleanios!!!"<<endl;
	}
	else{
		cout<<"Que tengas buen dia..."<<endl;
	}
	
	return 0;
}
