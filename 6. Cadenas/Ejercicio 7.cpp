#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100], b[100];
    int n1;
    float n2;

    cout << "Ingrese el valor de la cadena 1: "; cin.getline(a, 50, '\n');
    cout << "Ingrese el valor de la cadena 2: "; cin.getline(b, 50, '\n');

    n1 = atoi(a); n2 = atof(b); 

    cout << "La suma de las dos cadenas es: " << n1+n2 << endl;;

}

