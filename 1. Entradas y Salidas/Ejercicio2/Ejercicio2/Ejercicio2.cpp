#include <iostream>

using namespace std;

int main()
{
    float p, t;
    float t2;

    cout << "Digite el precio del producto: "; cin >> p;

    t = p * .16;
    t2 = p + t;

    cout << "El precio final del producto es: " << t2 << endl;
}

