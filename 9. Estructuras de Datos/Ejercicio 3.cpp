#include <iostream>
#include <string.h>

using namespace std;

struct Empleados {
    char nombre[30];
    int salario;
}E[100];

int main()
{
    int n, posMay, posMen;
    float mayor = 0, menor = 999999;

    cout << "Digite el numero de empleados existentes: "; cin >> n;

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << i + 1 << "." << "Nombre: "; cin.getline(E[i].nombre, 100, '\n');
        cout << i + 1 << "." << "Salario: "; cin >> E[i].salario;

        if (E[i].salario > mayor) {
            mayor = E[i].salario;
            posMay = i;
        }

        if (E[i].salario < menor) {
            menor = E[i].salario;
            posMen = i;
        }
        cout << "\n";
        
    }

    cout << "DATOS DEL MAYOR SALARIO\n";
    cout << "Nombre: " << E[posMay].nombre << endl;
    cout << "Salario: " << mayor << endl;
    cout << "\nDATOS DEL MENOR SALARIO\n";
    cout << "Nombre: " << E[posMen].nombre << endl;
    cout << "Salario: " << menor << endl;
}

