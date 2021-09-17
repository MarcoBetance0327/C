#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, resul;

    cout << "Ingrese el valor de a: "; cin >> a;
    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de c: "; cin >> c;
    cout << "Ingrese el valor de d: "; cin >> d;

    resul = a + (b / (c - d));

    cout.precision(2);
    cout << "\nEl valor de la expresion es: " << resul << endl;
}

