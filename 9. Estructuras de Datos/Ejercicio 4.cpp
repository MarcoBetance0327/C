#include <iostream>

using namespace std;

struct Atletas {
    char nombre[50];
    char pais[50];
    int num_medallas;
}a[100];

int main()
{
    int n, posM;
    float mayor = 0;

    cout << "Digite el numero de atletas: "; cin >> n;

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << i + 1 << "." << "Nombre: "; cin.getline(a[i].nombre, 50, '\n');
        cout << i + 1 << "." << "Pais: "; cin.getline(a[i].pais, 50, '\n');
        cout << i + 1 << "." << "Numero de Medallas: "; cin >> a[i].num_medallas;

        if (a[i].num_medallas > mayor) {
            mayor = a[i].num_medallas;
            posM = i;
        }
        cout << "\n";
    }

    cout << "DATOS DEL ATLETA CON MAS MEDALLAS\n";
    cout << "Nombre: "<<a[posM].nombre<<endl;
    cout << "Pais: " << a[posM].pais<<endl;
    cout << "Numero de Medallas: " << mayor<<endl;
}

