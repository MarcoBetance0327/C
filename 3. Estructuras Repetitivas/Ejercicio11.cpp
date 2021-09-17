#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "Digite numero a sacar factor primo: "; cin >> a;

	for (int i = 2; a > 1; i++) {
		while (a % i == 0) {
			cout << i << " ";
			a /= 2;
		}
	}
}

