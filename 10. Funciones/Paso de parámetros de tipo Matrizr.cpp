#include <iostream>

using namespace std;

void mostrarMatriz(int m[][3], int, int);
void cuadrado(int m[][3], int, int);
void mostrarMatrizElevada(int m[][3], int, int);

int main(){
	const int nf=2;
	const int nc=3;
	int m[nf][nc]= {{1,2,3}, {4,5,6}};
	
	mostrarMatriz(m,nf,nc);
	cuadrado(m,nf,nc);
	mostrarMatrizElevada(m,nf,nc);

}

void mostrarMatriz(int m[][3], int nfilas, int ncol){
	cout<<"Mostrando matriz original:\n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void cuadrado(int m[][3], int nfilas, int ncol){
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			m[i][j] *= m[i][j];
		}
	}
}

void mostrarMatrizElevada(int m[][3], int nfilas, int ncol){
	cout<<"Mostrando matriz al cuadrado:\n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}

