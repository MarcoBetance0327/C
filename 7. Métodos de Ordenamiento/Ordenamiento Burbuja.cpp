#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a[100];
    int i, j, aux, n, num;
    
    cout<<"Ingrese la cantidad de numeros a Ordenar: "; cin>>n;
    
    for(i = 0; i<n; i++){
    	cout<<"Ingrese numero para la posicion["<<i+1<<"]:"; cin>>a[i];
    }

    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }

    cout << "El ordenamiento burbuja es: ";

    for (i = 0; i < 5; i++) 
    {
        cout << a[i]<<" ";
    }

    _getch();
    return 0;
}

