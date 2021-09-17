#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, suma=0;

    for (int i = 1; i <= 10; i++) {
        a = i * i;
        suma += a;
    }

    cout << "La suma de los cuadrados de los primeros numeros es: " << suma << endl;
}
