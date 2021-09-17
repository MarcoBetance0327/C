#include <iostream>

using namespace std;

void intercambio(float& x, float& y) {
    float aux; 

    aux = x;
    x = y;
    y = aux;
}

void OrdenacionShell(float a[], int n) {
    int salto, i, j, k;
    salto = n / 2;

    while (salto > 0) {
        for (i = salto; i < n; i++) {
            j = i - salto;
            while (j >= 0) {
                k = j + salto;
                if (a[j] <= a[k]) {
                    j = -1;
                }
                else {
                    intercambio(a[j], a[k]);
                    j -= salto;
                }
            }
        }
        salto = salto / 2;
    }
}

int main()
{
    float arreglo[] = { 4,6,1,9,5,10,2,11,19,7 };
    OrdenacionShell(arreglo, 10);

    cout << "Arreglo Ordenado - Forma Ascendente" << endl;

    for (int i = 0; i < 10; i++) {
        cout << arreglo[i] << "|";
    }
    cout << endl;

    cout << "Arreglo Ordenado - Forma Descendente" << endl;

    for (int i = 9; i >= 0; i--) {
        cout << arreglo[i] << "|";
    }

    cout << endl;
}

