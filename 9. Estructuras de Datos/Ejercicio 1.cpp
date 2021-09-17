#include <iostream>
#include <string.h>

using namespace std;

struct Corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}c;

int main()
{
	cout << "Nombre: "; 
	cin.getline(c.nombre, 20, '\n');
	cout << "Edad: "; 
	cin >> c.edad;
	fflush(stdin);
	cout << "Sexo: ";
	cin.getline(c.sexo, 10, '\n');
	cout << "Club: "; 
	cin.getline(c.club, 20, '\n');

	cout << "Datos " << endl;
	cout << "\nNombre: "<<c.nombre; 
	cout << "\nedad: " << c.edad;
	cout << "\nSexo: " << c.sexo;
	cout << "\nClub: " << c.club;
}