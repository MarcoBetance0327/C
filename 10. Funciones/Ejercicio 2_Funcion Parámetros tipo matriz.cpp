#include <iostream>

using namespace std;

void Datos();
int MenorNum(int m[][100], int, int);

int m[100][100], nfilas, ncol;

int main(){
	Datos();
	cout<<"\nEl menor elemento es: "<<MenorNum(m,nfilas,ncol)<<endl;
}

void Datos(){
	cout<<"Ingrese numero de filas: "; cin>>nfilas;
	cout<<"Ingrese numero de columnas: "; cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Ingrese un numero para la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}

int MenorNum(int m[][100], int nfilas, int ncol){
	int fila, menor=99999;
	
	cout<<"\nDigite un numero de fila para comprobar menor elemento: "; cin>>fila;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			if(i==fila){
				if(m[i][j]<menor){
					menor = m[i][j];
				}
			}
		}
	}
	
	return menor;
}

