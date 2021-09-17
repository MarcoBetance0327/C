#include <iostream>

using namespace std;

int main()
{
    float total=0;
    int a, b;

    cout << "Ingrese el valor a para la expresion: "; cin >> a;
    cout << "\nIngrese el valor b para la expresion: "; cin >> b;


    total = (a / b) + 1;

    cout << "\nEl valor de la expresion es: " << total << endl;

}

