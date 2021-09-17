#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    char b[100];

    cout << "Digite el nombre de la cadena a: "; cin.getline(a, 50, '\n');
    cout << "Digite el nombre de la cadena b: "; cin.getline(b, 50, '\n');

    if (strcmp(a, b) == 0)
        cout << "\nAmbas palabras son iguales..." << endl;
    else if (strcmp(a, b) > 0)
        cout <<"\n"<< a << " es mayor alfabeticamente..." << endl;
    else if (strcmp(b, a) > 0)
        cout << "\n" << b << " es mayor alfabeticamente..." << endl;
    
}

