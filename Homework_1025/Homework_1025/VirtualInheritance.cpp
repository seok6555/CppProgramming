#include <iostream>
using namespace std;

class PointX
{
public:
	PointX(int x) : x_(x) { cout << "PointX ������" << endl; }
	~PointX() { cout << "PointX �Ҹ���" << endl; }
	void Print() { cout << "PointX: " << x_ << endl; }

protected:
	int x_;
};

class PointXY : virtual public PointX // ���� ���
{
public:
	PointXY(int x, int y) : PointX(x), y_(y) { cout << "PointXY ������" << endl; }
	~PointXY() { cout << "PointXY �Ҹ���" << endl; }
	void Print() { cout << "PointXY" << endl; }

protected:
	int y_;
};

class PointXZ : virtual public PointX // ���� ���
{
public:
	PointXZ(int x, int z) : PointX(x), z_(z) { cout << "PointXZ ������" << endl; }
	~PointXZ() { cout << "PointXZ �Ҹ���" << endl; }
	void Print() { cout << "PointXZ" << endl; }

protected:
	int z_;
};

class PointXYZ : public PointXY, public PointXZ
{
public:
	PointXYZ(int x, int y, int z) : PointX(0), PointXY(x, y), PointXZ(x, z), xyz_(0) { cout << "PointXYZ ������" << endl; }
	~PointXYZ() { cout << "PointXYZ �Ҹ���" << endl; }
	void Print() {
		cout << "x_ : " << x_ << endl;	// OK
		PointX::Print();				// OK
		PointXY::PointX::Print();
		PointXZ::PointX::Print();
		PointXY::Print();
		PointXZ::Print();
		cout << "PointXYZ" << endl;
	}

private:
	int xyz_;
};

int main() {
	PointXYZ Pxyz(1, 2, 3);
	Pxyz.Print();

	return 0;
}