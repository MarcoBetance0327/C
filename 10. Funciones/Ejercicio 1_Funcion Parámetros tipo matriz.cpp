#include <iostream>

using namespace std;

void Datos();
void Simetria(int m[][100], int, int);

int m[100][100], nfilas,ncol;

int main(){
	
	Datos();
	Simetria(m, nfilas,ncol);
}


void Datos(){
	cout<<"Digite el numero de filas: "; cin>>nfilas;
	cout<<"Digite el numero de columnas: "; cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>m[i][j];
		}
	}
}

void Simetria(int m[][100], int nf, int nc){
	int cont = 0;
	
	if(nfilas==ncol){
	
		for(int i=0;i<nfilas;i++){
			for(int j=0;j<ncol;j++){
				if(m[i][j] == m[j][i]){
					cont++;
				}
			}
		}
	}
	
	if(cont == nfilas*ncol){
		cout<<"La matriz es simetrica..."<<endl;
	}
	else{
		cout<<"La matriz no es simetrica..."<<endl;
	}
}
