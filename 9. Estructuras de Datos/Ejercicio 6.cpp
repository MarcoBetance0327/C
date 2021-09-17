#include <iostream>

using namespace std;

struct Promedio {
    float nota1, nota2, nota3;
};

struct Alumno {
    char nombre[50];
    char sexo[50];
    int edad;
    struct Promedio notas;
}a[50];

int main()
{
    int n, pos;
    float promedio, mayor = 0;;

    cout << "Digite el numero de alumnos: "; cin >> n;

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << i + 1 << "." << "Nombre: "; cin.getline(a[i].nombre, 50, '\n');
        cout << i + 1 << "." << "Sexo: "; cin.getline(a[i].sexo, 50, '\n');
        cout << i + 1 << "." << "Edad: "; cin >> a[i].edad;
        cout << i + 1 << "." << "Nota 1: "; cin >> a[i].notas.nota1;
        cout << i + 1 << "." << "Nota 2: "; cin >> a[i].notas.nota2;
        cout << i + 1 << "." << "Nota 3: "; cin >> a[i].notas.nota3;

        promedio = (a[i].notas.nota1 + a[i].notas.nota2 + a[i].notas.nota3) / 3;

        if (promedio > mayor) {
            mayor = promedio;
            pos = i;
        }
        cout << "\n";
    }
    

    cout << "\nDATOS\n";
    cout << "Nombre: " << a[pos].nombre << endl;
    cout << "Sexo: " << a[pos].sexo << endl;
    cout << "Edad: " << a[pos].edad << endl;
    cout << "Promedio: " << mayor;
    cout << "\n";
}

