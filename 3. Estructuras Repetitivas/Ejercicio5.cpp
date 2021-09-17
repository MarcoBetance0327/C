#include <iostream>

using namespace std;

int main()
{
	int n, s = 0;

	cout << "Digite el numero de elementos: "; cin >> n;

	for (int i = 1; i <= (2 * n - 1); i+=2) {
		s += i;
		cout << i<<" ";

	}

	cout << "\nLa suma de los elementos es: " << s << endl;
}

