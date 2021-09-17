#include <iostream>

using namespace std;

float r;

float mult(float x, float x2) {
    
    r = x * x2;

    return r;
}

int main()
{
    float n1, n2;

    cout << "Digite el numero 1: "; cin >> n1;
    cout << "Digite el numero 2: "; cin >> n2;

    mult(n1, n2);

    cout << "El resultado de la operacion es: " << r << endl;
}

