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
    cout << "Nombre: "; cin.getline(a[50].nombre, 50, '\n');
    cout << "Sexo: "; cin.getline(a[50].sexo, 50, '\n');
    cout << "Edad: "; cin >> a[50].edad;
    cout << "Nota 1: "; cin >> a[50].notas.nota1;
    cout << "Nota 2: "; cin >> a[50].notas.nota2;
    cout << "Nota 3: "; cin >> a[50].notas.nota3;

    cout << "\nDATOS\n";
    cout << "Nombre: " << a[50].nombre << endl;
    cout << "Sexo: " << a[50].sexo << endl;
    cout << "Edad: " << a[50].edad << endl;
    cout << "Nota 1: " << a[50].notas.nota1 << endl;
    cout << "Nota 2: " << a[50].notas.nota2 << endl;
    cout << "Nota 3: " << a[50].notas.nota3 << endl;
    cout << "Promedio: " << (a[50].notas.nota1 + a[50].notas.nota2 + a[50].notas.nota3)/3;
    cout << "\n";
}

