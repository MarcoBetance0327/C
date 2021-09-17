#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void agregar();

int main(){
	agregar();
}

void agregar(){
	ofstream archivo;
	string texto;
	
	archivo.open("prueba.txt", ios::app); //Abriendo el archivo en modo añadir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}	
	
	cout<<"Digite el texto que quiere agregar:"; getline(cin,texto);
	
	archivo<<texto<<endl;
	
	archivo.close();
}
