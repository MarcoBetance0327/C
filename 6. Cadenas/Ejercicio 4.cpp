#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[] = "Hola que tal ";
    char b[20], c[50];

    cout << "Digite su nombre: "; cin.getline(b, 20, '\n');

    strcpy_s(c, a);
    strcat_s(c, b);

    cout << c;
}

