#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

void escribir();

int main(){
	escribir();
}

void escribir(){
	ofstream archivo;
	
	archivo.open("posicion.txt", ios::out);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo...";
		exit(1);
	}
	
	cout<<"Posicion actual: "<<archivo.tellp()<<endl;
	archivo<<"Hola que tal?";
	
	archivo.seekp(5);
	
	archivo<<"Como estas?";
	cout<<"Posicion actual: "<<archivo.tellp()<<endl;

	archivo.close();
	
}
