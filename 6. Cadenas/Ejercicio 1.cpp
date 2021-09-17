#include <iostream>

using namespace std;

int main()
{
	int longitud = 0;
	char cadena[50];

	cout << "Ingrese la cadena:"; cin.getline(cadena, 50, '\n');


	if (strlen(cadena)>10)
		cout << "Su cadena es mayor a 10...";
	else 
		cout << "Su cadena es: " << cadena;

}

