#include <iostream>
#include <string.h>

using namespace std;

struct Alumno{
    char Nombre[50];
    int edad;
    float promedio;
}A[3];

int main()
{
    float mayor = 0;
    int pos;

    for (int i = 0; i < 3; i++) {
        
        cout << i + 1 << "." << "Nombre: "; cin.getline(A[i].Nombre, 50, '\n');
        cout << i + 1 << "." << "Edad: "; cin >> A[i].edad;
        cout << i + 1 << "." << "Promedio: "; cin >> A[i].promedio;
        cout << "\n";

        if (A[i].promedio > mayor) {
            mayor = A[i].promedio;
            pos = i;
        }
        cin.ignore();
    }
    cout << "DATOS DEL MEJOR PROMEDIO\n\n";
    cout << "Nombre: " << A[pos].Nombre<<endl;
    cout << "Edad: " << A[pos].edad << endl;
    cout << "Promedio: " << mayor << endl;
    cout << "\n";

}