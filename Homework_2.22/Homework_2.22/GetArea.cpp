#include <iostream>

using namespace std;

// ���簢�� ���� ���ϴ� �Լ�.
double GetArea(double w, double h) {
	return w * h;
}

// �� ���� ���ϴ� �Լ�.
double GetArea(double r) {
	return r * r * 3.141592;
}

int main() {
	int selectShape;

	double width;
	double height;
	double radius;

	cout << "���� ���� �Է� (1: ���簢��, 2: ��): ";
	cin >> selectShape;

	switch (selectShape)
	{
	case 1:
		cout << "����, ���� �Է�: ";
		cin >> width >> height;
		cout << "���簢�� ����: " << GetArea(width, height) << endl;
		break;
	case 2:
		cout << "������ �Է�: ";
		cin >> radius;
		cout << "�� ����: " << GetArea(radius) << endl;
		break;
	default:
		cout << "�Է� ����!" << endl;
		break;
	}

	return 0;
}