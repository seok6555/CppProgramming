#include <iostream>

using namespace std;

// 직사각형 면적 구하는 함수.
double GetArea(double w, double h) {
	return w * h;
}

// 원 면적 구하는 함수.
double GetArea(double r) {
	return r * r * 3.141592;
}

int main() {
	int selectShape;

	double width;
	double height;
	double radius;

	cout << "도형 선택 입력 (1: 직사각형, 2: 원): ";
	cin >> selectShape;

	switch (selectShape)
	{
	case 1:
		cout << "가로, 세로 입력: ";
		cin >> width >> height;
		cout << "직사각형 면적: " << GetArea(width, height) << endl;
		break;
	case 2:
		cout << "반지름 입력: ";
		cin >> radius;
		cout << "원 면적: " << GetArea(radius) << endl;
		break;
	default:
		cout << "입력 오류!" << endl;
		break;
	}

	return 0;
}