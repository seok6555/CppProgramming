#include <iostream>
using namespace std;

// index ��° ���ҿ� ���� ���� ��ȯ(���� ��ü�� ��ȯ)
int& GetArray(int* ary, int index) { return ary[index]; }

int main() {
	int i, ary[5];

	for (i = 0; i < 5; i++)
		GetArray(ary, i) = i; // GetArray(ary, i) => ary[i]
	for (i = 0; i < 5; i++)
		cout << "ary[" << i << "] = " << GetArray(ary, i) << endl;

	return 0;
}