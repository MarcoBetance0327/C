#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void escribir();

int main(){
	escribir();	
}

void escribir(){
	ofstream archivo;
	string frase, nombre;
	char opc;
	
	cout<<"Digite el nombre del archivo: "; getline(cin, nombre);
	
	archivo.open(nombre.c_str(),ios::out);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Digite una frase: "; getline(cin, frase);
		archivo<<frase<<endl;
		cout<<"\tDesea agregar otra frase?(S/N):"; cin>>opc;
	}while((opc =='S') || (opc =='s'));
	
	archivo.close();
	
}
