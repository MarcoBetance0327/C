#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, et;

    cout << "Introduzca el valor de a: "; cin >> a;
    cout << "Introduzca el valor de b: "; cin >> b;
    cout << "Introduzca el valor de c: "; cin >> c;
    cout << "Introduzca el valor de d: "; cin >> d;

    et = (a + b) / (c + d);

    cout.precision(3);
    cout << "\nEl valor de la expresion es: " << et << endl;;



}

