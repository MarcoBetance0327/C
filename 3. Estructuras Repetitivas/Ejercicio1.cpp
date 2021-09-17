#include <iostream>

using namespace std;

int main()
{
    int a, a2;

    do {
        cout << "Ingresa un numero mayor a 0 y menor a 10: "; cin >> a;
    } while(a<=0 || a>10);

    for (int i = 1; i <= 20; i++) {
        a2 = a * i;
        cout << a<<" * " << i << " = " << a2<<endl;
    }

}

