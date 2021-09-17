#include <iostream>

using namespace std;

int main()
{
    int x, y, aux;

    cout << "Digite el valor de x: "; cin >> x;
    cout << "Digite el valor de y: "; cin >> y;

    aux = x;

    cout << "\nX = " << x << endl;
    cout << "y = " << y << endl;

    x = y;
    y = aux;

    cout << "\nX = " << x<<endl;
    cout << "y = " << y<<endl;

}

