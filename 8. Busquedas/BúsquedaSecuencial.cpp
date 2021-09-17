#include <iostream>

using namespace std;

int main()
{
    int a[] = { 3,5,1,4,2 };
    int i = 0, dato;
    char band = 'F';

    dato = 4;

    while ((band == 'F') && (i < 5)) {
        if (a[i] == dato) {
            band = 'V';
        }
        i++;
    }

    if (band == 'F')
        cout << "El dato no existe..."<<endl;
    else if (band == 'V')
        cout << "El dato ha sido encontrado!!" << i - 1 << endl;;

}

