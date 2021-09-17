#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char n1[100];
    char n2[100];

    cout << "Ingrese el nombre para la cadena 1: "; cin.getline(n1, 50,'\n');

    strcpy_s(n2, n1);

    cout << "La cadena 2 es: " << n2<<endl;

}

