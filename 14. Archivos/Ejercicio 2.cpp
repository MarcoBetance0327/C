#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void lectura();

int main(){
	lectura();
}

void lectura(){
	ifstream archivo;
	string texto, nombreA;
	
	cout<<"Digite el archivo a buscar: "; getline(cin, nombreA);
	
	archivo.open(nombreA.c_str(), ios::in);
	
	
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo...";
		exit(1);
	}
	
	while(!archivo.eof()){
		getline(archivo, texto);
		cout<<texto<<endl;
	}
	
	archivo.close();
}
