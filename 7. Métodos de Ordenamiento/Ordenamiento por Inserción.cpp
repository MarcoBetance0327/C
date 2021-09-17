#include <iostream>

using namespace std;

int main()
{
    int a[] = { 4,5,1,3,2 };
    int i, pos, aux;

    for (i = 0; i < 5; i++) {
        pos = i;
        aux = a[i];

        while ((pos > 0) && (a[pos - 1] > aux)) {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = aux;
    }
    for (i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
}

