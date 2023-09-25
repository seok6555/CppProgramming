#include <iostream>
using namespace std;

class Shape
{
public:
	Shape(int type = 1, double len = 0) : type_(type), len_(len), PI(3.14) {
		if (type_ == 1)
		{
			squareCount_++;
		}
		else if (type_ == 2)
		{
			circleCount_++;
		}
	}
	~Shape() {
		if (type_ == 1)
		{
			squareCount_--;
		}
		else if (type_ == 2)
		{
			circleCount_--;
		}
	}
	// 도형의 면적 계산 함수.
	double GetArea() {
		if (type_ == 1)
		{
			return len_ * len_;
		}
		else if (type_ == 2)
		{
			return PI * len_ * len_;
		}

		return 0;
	}
	static int GetRectCount() {
		return squareCount_;
	}
	static int GetCircleCount() {
		return circleCount_;
	}

private:
	int type_;					// 정사각형(1) 또는 원(2)을 의미하는 타입 변수
	double len_;				// 정사각형의 경우 -> 한 변의 길이. 원의 경우 -> 반지름의 길이.
	const double PI;			// 파이값
	static int squareCount_;	// 정사각형 개수
	static int circleCount_;	// 원 개수
};

int Shape::squareCount_ = 0;
int Shape::circleCount_ = 0;

int main() {
	Shape shape1(1, 5);
	Shape shape2(2, 5);
	Shape* p_rect = new Shape[3];

	cout << "사각형 개수	: " << Shape::GetRectCount() << endl;
	cout << "원 개수		: " << Shape::GetCircleCount() << endl;
	cout << "shape1의 면적	: " << shape1.GetArea() << endl;

	delete[] p_rect;

	cout << "사각형 개수	: " << Shape::GetRectCount() << endl;
	cout << "원 개수		: " << Shape::GetCircleCount() << endl;
	cout << "shape1의 면적	: " << shape2.GetArea() << endl;

	return 0;
}