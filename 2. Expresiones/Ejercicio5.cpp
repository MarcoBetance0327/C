#include <iostream>

using namespace std;

int main()
{
	float a, b, c, resul;

	cout << "Digite la nota 1: "; cin >> a;
	cout << "Digite la nota 2: "; cin >> b;
	cout << "Digite la nota 3: "; cin >> c;
	

	resul = (a + b + c) / 3;

	cout.precision(2);
	cout << "\nLa nota media es de: " << resul<<endl;

}

