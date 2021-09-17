#include <iostream>

using namespace std;

int main()
{
	int n,s=0;

	cout << "Ingrese un numero: "; cin >> n;

	for (int i = 1; i <= n; i++) {
		s += i;
	}

	cout << "\nLa suma de n numeros es: " << s << endl;
}

