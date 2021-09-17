#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    char b[100];

    cout << "Ingrese el nombre de la cadena: "; cin.getline(a, 100, '\n');

    strcpy_s(b, a);

    _strrev(a);
    
    if (strcmp(a, b) == 0)
        cout << "La palabra es palindroma...";
    else
        cout << "La palabra no es palindroma...";


}

