#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int;
	*p = 10;
	cout << *p << endl;
	delete p;

	p = new int(10);
	cout << *p << endl;
	delete p;

	p = new int[5];
	for (int i = 0; i < 5; i++)
		p[i] = i;
	for (int i = 0; i < 5; i++)
		cout << p[i] << ' ';
	delete[] p;
	cout << endl;

	p = new int[5] {1, 2, 3};
	for (int i = 0; i < 5; i++)
		cout << p[i] << ' ';
	delete[] p;
	cout << endl;

	return 0;
}