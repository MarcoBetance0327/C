#include <iostream>

using namespace std;

int main()
{
	int n, par, sumPares=0, sumImpares=0, sumTotal;

	cout << "Digite el numero de elementos: "; cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			par = i * -1;
			sumPares += par;
		}
		else {
			sumImpares += i;
		}
	}
	sumTotal = sumPares + sumImpares;

	cout <<"\nLa suma de los elementos es: " << sumTotal << endl;
}

