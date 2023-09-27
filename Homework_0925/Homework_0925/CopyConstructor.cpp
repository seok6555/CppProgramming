#include <iostream>
using namespace std;

class Array
{
public:
	Array(const Array& ary) {
		count_ = ary.count_;
		ary_ = new int[count_];
		for (int i = 0; i < count_; i++)
		{
			ary_[i] = i;
		}
	}
	Array(int count = 0) {
		count_ = count;
		ary_ = new int[count_];
		for (int i = 0; i < count_; i++)
		{
			ary_[i] = i;
		}
	}
	~Array() { delete[] ary_; }
	Array& Set(int index, int content) {
		ary_[index] = content;
		return (*this);
	}
	void Print() {
		for (int i = 0; i < count_; i++)
		{
			cout << ary_[i] << " ";
		}
		cout << endl;
	}

private:
	int* ary_;	// 배열을 가리키는 포인터 변수
	int count_;	// 원소의 개수를 의미
};

int main() {
	Array ary1(5);
	Array ary2(7);
	Array ary3(ary1);

	ary2.Set(0, 11).Set(1, 12).Set(2, 13);

	ary1.Print();
	ary2.Print();
	ary3.Print();

	return 0;
}