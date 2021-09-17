#include <iostream>
#include "Vehiculo.h">
using namespace std;

int main(int argc, char** argv) {
	Vehiculo* coches;
	int numCoches, indiceBarato;
	string marca, modelo;
	float precio;
	
	cout<<"Digite el numero de Vehiculos: ";
	cin>>numCoches;
	
	coches = new Vehiculo[numCoches];
	
	for(int i=0; i<numCoches; i++){
		fflush(stdin);
		cout<<"Digite los datos del Vehiculo "<<(i+1)<<": "<<endl;
		cout<<"Digite la marca: "; getline(cin, marca);
		cout<<"Digite el modelo: "; getline(cin, modelo);
		cout<<"Digite el precio: "; cin>>precio;
		
		coches[i] = Vehiculo(marca, modelo, precio);
	}
	
	indiceBarato = Vehiculo::indiceMBarato(coches,numCoches);

	cout<<"\nEl vehiculo mas barato es: "<<endl;
	(coches+indiceBarato)->mostrarDatos();
	
	delete[] coches;
	return 0;
}
