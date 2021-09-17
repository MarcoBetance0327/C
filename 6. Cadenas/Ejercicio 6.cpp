#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100], b[100];

    cout << "Ingrese el nombre de la cadena 1: "; cin.getline(a, 50, '\n');
    cout << "Ingrese el nombre de la cadena 2: "; cin.getline(b, 50, '\n');

    _strupr_s(a);
    _strupr_s(b);

    cout <<"\n"<< a;
    cout <<"\n"<< b;

    if (strcmp(a, b) == 0)
        cout << "\nLas cadenas son iguales..." << endl;
    else
        cout << "\nLas cadenas no son iguales..." << endl;
}

