#include <iostream>

using namespace std;

int main()
{
    int num[100], n;

    cout << "Digite un numero de elementos que va a tener el arreglo: "; cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nDigite un numero: "; cin >> num[i];
    }

    for (int i = 0; i < n; i++) {
        cout << i << "->"<<num[i]<<endl;
    }
}

