#include <iostream>

using namespace std;

int main()
{
    float a, b, c, resul;

    cout << "Ingrese el valor de la primera nota: "; cin >> a;
    a *= .30;
    cout << "Ingrese el valor de la segunda nota: "; cin >> b;
    b *= .60;
    cout << "Ingrese el valor de la tercera nota: "; cin >> c;
    c *= .10;

    resul = a + b + c;

    cout << "\nEl promedio de la nota final es: " << resul << endl;
}

