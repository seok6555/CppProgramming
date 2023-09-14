#include <iostream>
using namespace std;

class Point
{
public:
	inline Point(int x, int y);
	inline void Move(int y, int x);
	inline void Print();
private:
	int x_, y_;
};

inline Point::Point(int x, int y) : x_(x), y_(y) {}	// �������� �ܺ� ����
inline void Point::Move(int x, int y) {				// ��� �Լ��� �ܺ� ����
	x_ = x_ + x;
	y_ = y_ + y;
}
inline void Point::Print() {						// ��� �Լ��� �ܺ� ����
	cout << "(" << x_ << ", " << y_ << ")" << endl;
}

int main() {
	Point pt1(3, 4);
	pt1.Move(5, 6);
	pt1.Print();

	return 0;
}