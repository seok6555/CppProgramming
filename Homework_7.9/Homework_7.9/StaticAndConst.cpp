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
	// ������ ���� ��� �Լ�.
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
	int type_;					// ���簢��(1) �Ǵ� ��(2)�� �ǹ��ϴ� Ÿ�� ����
	double len_;				// ���簢���� ��� -> �� ���� ����. ���� ��� -> �������� ����.
	const double PI;			// ���̰�
	static int squareCount_;	// ���簢�� ����
	static int circleCount_;	// �� ����
};

int Shape::squareCount_ = 0;
int Shape::circleCount_ = 0;

int main() {
	Shape shape1(1, 5);
	Shape shape2(2, 5);
	Shape* p_rect = new Shape[3];

	cout << "�簢�� ����	: " << Shape::GetRectCount() << endl;
	cout << "�� ����		: " << Shape::GetCircleCount() << endl;
	cout << "shape1�� ����	: " << shape1.GetArea() << endl;

	delete[] p_rect;

	cout << "�簢�� ����	: " << Shape::GetRectCount() << endl;
	cout << "�� ����		: " << Shape::GetCircleCount() << endl;
	cout << "shape1�� ����	: " << shape2.GetArea() << endl;

	return 0;
}