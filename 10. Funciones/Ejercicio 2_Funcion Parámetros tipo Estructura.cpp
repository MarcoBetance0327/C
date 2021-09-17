#include <iostream>

using namespace std;

int Mayor=0;

struct Fecha{
	int dia;
	int mes;
	int anio;
	
}F1,F2;

void Datos();
Fecha mayor(Fecha, Fecha);
void muestra(Fecha);

int main(){
	Datos();
	
	Fecha x = mayor(F1,F2);
	
	muestra(x);
}

void Datos(){

	cout<<"Digite los datos para la Primera Fecha: "<<endl;
	cout<<"Dia: "; cin>>F1.dia;
	cout<<"Mes: "; cin>>F1.mes;
	cout<<"Anio: "; cin>>F1.anio;
	
	cout<<"Digite los datos para la Segunda Fecha: "<<endl;
	cout<<"Dia: "; cin>>F2.dia;
	cout<<"Mes: "; cin>>F2.mes;
	cout<<"Anio: "; cin>>F2.anio;
}

Fecha mayor(Fecha F1, Fecha F2){
	Fecha mayorFecha;
	
	if((F1.anio >= F2.anio) && (F1.mes >= F2.mes) && (F1.dia>=F2.dia)){
		mayorFecha = F1;
	}
	else if(F2.anio > Mayor){
		mayorFecha = F2;
	}
	
	return mayorFecha;
}

void muestra(Fecha x){
	cout<<"\nLa fecha mas reciente es: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;
}
