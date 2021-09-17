#include <iostream>

using namespace std;

int main()
{
    int cont=0, num;

    do {

        cout << "Ingrese un numero cualquiera: "; cin >> num;
        
        if (num > 0) {
            cont++;
        }

    } while (num != 0);

    cout <<"\n"<< cont << " numeros son mayores a 0 " << endl;
}

