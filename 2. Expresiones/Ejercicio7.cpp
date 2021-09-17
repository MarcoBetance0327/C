#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;

    cout << "Ingresa el valor del cateto a: "; cin >> a;
    cout << "Ingresa el valor del cateto b: "; cin >> b;

    c= sqrt(pow(a, 2) + pow(b, 2));
    
    cout << "\nEl valor de la hipotenusa es: " << c << endl;
}

