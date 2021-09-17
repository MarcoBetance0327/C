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
	string texto, nombreA;
	
	cout<<"Digite el nombre o la ubicacion del archivo: "; getline(cin, nombreA);
	
	archivo.open(nombreA.c_str(), ios::app);
	
	if(archivo.fail()){
		cout<<"El archivo no se pudo abrir...";
		exit(1);
	}
	
	cout<<"Digite el texto que desea agregar: "; getline(cin, texto);
	
	archivo<<texto<<endl;
	
	archivo.close();
}
