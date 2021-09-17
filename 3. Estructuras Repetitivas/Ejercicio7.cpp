#include <iostream>

using namespace std;

int main()
{
    int n, suma = 0, mult = 1;

    cout << "Digite el numero de elementos: "; cin >> n;

    for (int i = 1; i <= n; i++) {
        mult *= i;
        suma += mult;
    }
    cout << "La suma de factoriales es: " << suma << endl;
}

