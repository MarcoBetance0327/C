#include <iostream>

using namespace std;

int main()
{
	int n, mult = 1;

	cout << "Digite un numero ha calcular su factorial: "; cin >> n;

	for (int i = 1; i <= n; i++) {
		mult *= i;
	}

	cout << "El factorial es: " << mult << endl;
}

