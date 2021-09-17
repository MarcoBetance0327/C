#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void escribir();
void lectura();

struct Registro{
	char nombre[20];
	char apellido[20];
};

int main(){
	escribir();
	lectura();
}

void escribir(){
	ofstream archivoB;
	
	archivoB.open("Prueba.dat", ios::out | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se pudo abrir el archivo...";
		exit(1);
	}
	
	Registro persona;
	
	cout<<"Pidiendo datos"<<endl;
	cout<<"Digite un nombre: "; cin.getline(persona.nombre, 20, '\n');
	cout<<"Digite un apellido: "; cin.getline(persona.apellido, 20, '\n');

	archivoB.write((char *)&persona, sizeof(Registro));
	
	archivoB.close();
}

void lectura(){
	ifstream archivoB;
	
	archivoB.open("Prueba.dat", ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se puede abrir el archivo...";
		exit(1);
	}
	
	Registro persona;
	
	archivoB.read((char *)&persona, sizeof(Registro));
	
	cout<<"\n\nMostrando los datos leidos"<<endl;
	cout<<"Nombre: "<<persona.nombre<<endl;
	cout<<"Apellido: "<<persona.apellido<<endl;
	
	archivoB.close();
}
