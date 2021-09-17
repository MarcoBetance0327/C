#include <iostream>

using namespace std;

int main()
{
    int num[100], e, mayor=0;

    cout << "Digite el numero de elementos: "; cin >> e;

    for (int i = 0; i < e; i++) {
        cout <<i*1<<"Digite un numero: "; cin >> num[i];

        if (num[i] > mayor) {
            mayor = num[i];
        }
    }
    cout << "El numero mayor es: " << mayor;

}

