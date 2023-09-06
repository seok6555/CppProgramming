#include <iostream>
using namespace std;

// index 번째 원소에 대한 참조 반환(원소 자체를 반환)
int& GetArray(int* ary, int index) { return ary[index]; }

int main() {
	int i, ary[5];

	for (i = 0; i < 5; i++)
		GetArray(ary, i) = i; // GetArray(ary, i) => ary[i]
	for (i = 0; i < 5; i++)
		cout << "ary[" << i << "] = " << GetArray(ary, i) << endl;

	return 0;
}