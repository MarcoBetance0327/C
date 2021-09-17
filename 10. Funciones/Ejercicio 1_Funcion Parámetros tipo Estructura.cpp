#include <iostream>

using namespace std;

struct Complejo{
	float real,imaginaria;	
}z1,z2;

void Datos();
Complejo Suma(Complejo, Complejo);
void muestra(Complejo);

int main(){
	Datos();
	
	Complejo x = Suma(z1,z2);
	
	muestra(x);
}

void Datos(){
	cout<<"Digite los datos para el primer numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z1.real;
	cout<<"Parte Imaginaria: "; cin>>z1.imaginaria;

	cout<<"Digite los datos para el segundo numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z2.real;
	cout<<"Parte Imaginaria: "; cin>>z2.imaginaria;

}

Complejo Suma(Complejo z1, Complejo z2){
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;
	
	return z1;
}

void muestra(Complejo x){
	cout<<"\nResultado de la suma: "<<x.real<<" , "<<x.imaginaria<<endl;
}
