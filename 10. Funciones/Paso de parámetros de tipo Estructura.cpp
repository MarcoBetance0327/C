#include <iostream>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;	
}p1;


void Datos();
void muestra(Persona);

int main(){
	Datos();
	muestra(p1);
	
}

void Datos(){
	cout<<"Digite su nombre: "; cin.getline(p1.nombre,30,'\n');
	cout<<"Digite su edad: "; cin>>p1.edad;
}

void muestra(Persona p){
	cout<<"\n\nNombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}
