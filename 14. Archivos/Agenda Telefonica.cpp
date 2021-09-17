#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void menu();
void crear_contacto();
void agregar_contacto();
void visualizar();

struct Datos{
	string nombre, apellido, telefono;
	
}datos;

int main(){
	menu();
}

void menu(){
	int opc;
	
	
	do{
		cout<<"\tMENU"<<endl;
		cout<<"1.Crear(nombre, apellidos, telefono)"<<endl;
		cout<<"2.Agregar mas contactos(nombre, apellido, telefono)"<<endl;
		cout<<"3.Visualizar contactos existentes"<<endl;
		cout<<"4.Salir"<<endl;
		cout<<"Opcion: "; cin>>opc;
		
		switch(opc){
			case 1:
				crear_contacto();
				cout<<"\n";
				system("pause");
				break;
			case 2:
				agregar_contacto();
				cout<<"\n";
				system("pause");
				break;
			case 3:
				visualizar();
				cout<<"\n";
				system("pause");
				break;
		}
	}while(opc!=4);
}

void crear_contacto(){
	ofstream archivo;
	char rpt;
	
	archivo.open("Agenda Telefonica.txt", ios::out); //Abriendo el archivo en modo escritura

	if(archivo.fail()){
		cout<<"No se pudo crear el archivo...";
		exit(1);
	}	
	
	archivo<<"\tAgenda Telefonica"<<endl;
	
	do{
		fflush(stdin);
		cout<<endl;
		cout<<"Digite su nombre: "; getline(cin, datos.nombre);
		cout<<"Digite su apellido: "; getline(cin, datos.apellido);
		cout<<"Digite su telefono: "; getline(cin, datos.telefono);
		
		archivo<<"Nombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
		cout<<"Desea agregar otro contacto(S/N): ";
		cin>>rpt;
	}while((rpt=='S')||(rpt=='s'));
	
	archivo.close();
}

void agregar_contacto(){
	ofstream archivo;
	char rpt;
	
	archivo.open("Agenda Telefonica.txt", ios::app);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"\nDigite su nombre: "; getline(cin, datos.nombre);
		cout<<"\nDigite su apellido: "; getline(cin, datos.apellido);
		cout<<"\nDigite su telefono: "; getline(cin, datos.telefono);
		cout<<"\n";
		
		archivo<<"\nNombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Nombre: "<<datos.telefono<<endl;
		
		cout<<"Desea agregar otro contacto(S/N): ";
		cin>>rpt;
	}while((rpt=='S')||(rpt=='s'));
	
	archivo.close();
}

void visualizar(){
	ifstream archivo;
	string texto;
	
	archivo.open("Agenda Telefonica.txt", ios::in);
	
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
