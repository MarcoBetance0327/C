#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void escribir();

struct Registro{
	char nombre[20];
	char apellido[20];
};

int main(){
	escribir();
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
