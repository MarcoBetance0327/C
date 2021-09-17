#include <iostream>


using namespace std;

int main()
{
	char a[] = {'B'};
	char b[] = { 'P' };
	char c[100];

	for (int i = 0; i < 1; i++) {
		c[i] = a[i];
	}

	for (int i = 1; i < 2; i++) {
		c[i] = b[i-1];
	}

	for (int i = 0; i < 2; i++) {
		cout << c[i] << endl;
	}

	

}

