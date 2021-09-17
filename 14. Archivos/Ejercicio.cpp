#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void menu();
void escribir();
void agregar();
void mostrar();

struct Registro{
	float hora;
	int pulsaciones;
};

int main(){
	menu();
	
	
}

void menu(){
	int opcion;
	
	do{
		fflush(stdin);
		cout<<"\tMENU"<<endl;
		cout<<"1. Comenzar a digitar las pulsaciones"<<endl;
		cout<<"2. aniadir mas pulsaciones"<<endl;
		cout<<"3. Mostrar las pulsaciones registradas"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Digite una opcion: "; cin>>opcion;
		
		switch(opcion){
			case 1:
				escribir();
				break;
			case 2:
				agregar();
				break;
			case 3:
				mostrar();
				break;
			case 4:
				break;
			deafault: cout<<"Se equivoco de opcion de menu"<<endl;
		}
		system("pause");
		system("cls");
	}while(opcion != 4);
}

void escribir(){
	ofstream archivoB;
	
	archivoB.open("pulsaciones.dat", ios::out | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se pudo crear el archivo...";
		exit(1);
	}
	
	Registro pulso;
	
	cout<<"\nDigite la hora: "; cin>>pulso.hora;
	cout<<"\nDigite la cantidad de pulsaciones: "; cin>>pulso.pulsaciones;
	
	archivoB.write((char *)&pulso, sizeof(Registro));
	
	archivoB.close();
}

void agregar(){
	ofstream archivoB;
	
	archivoB.open("pulsaciones.dat", ios::app | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se pudo crear el archivo...";
		exit(1);
	}
	
	Registro pulso;
	
	cout<<"\nDigite la hora: "; cin>>pulso.hora;
	cout<<"\nDigite la cantidad de pulsaciones: "; cin>>pulso.pulsaciones;
	
	archivoB.write((char *)&pulso, sizeof(Registro));
	
	archivoB.close();
}

void mostrar(){
	ifstream archivoB;
	
	archivoB.open("pulsaciones.dat", ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se pudo crear el archivo...";
		exit(1);
	}
	
	Registro pulso;
	
	while(!archivoB.eof()){
		archivoB.read((char *)&pulso, sizeof(Registro));
		
		if(!archivoB.eof()){
			cout<<"Hora: "<<pulso.hora;
			cout<<"Pulsaciones: "<<pulso.pulsaciones<<endl<<endl;
		}
	}
	
	
	
	archivoB.close();
}
