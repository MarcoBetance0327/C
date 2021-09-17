#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int columnas, filas;

    cout << "Digite el numero de columnas: "; cin >> columnas;
    cout << "Digite el numero de filas: "; cin >> filas;

    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << "Digite un numero [" << i << "][" << j << "]";
            cin >> a[i][j];
        }
        cout << "\n";
    }
}

