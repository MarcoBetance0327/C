#include <iostream>
#include <math.h>

using namespace std;

float r;

float al_cuadrado(float x) {
    x = pow(x, 2);

    cout << "El numero al cuadrado es: " << x;

    return x;
}

int main()
{
    float n;

    cout << "Digite el numero: "; cin >> n;

    al_cuadrado(n);
}

