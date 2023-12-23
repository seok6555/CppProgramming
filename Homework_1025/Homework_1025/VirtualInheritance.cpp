#include <iostream>
using namespace std;

class PointX
{
public:
	PointX(int x) : x_(x) { cout << "PointX 생성자" << endl; }
	~PointX() { cout << "PointX 소멸자" << endl; }
	void Print() { cout << "PointX: " << x_ << endl; }

protected:
	int x_;
};

class PointXY : virtual public PointX // 가상 상속
{
public:
	PointXY(int x, int y) : PointX(x), y_(y) { cout << "PointXY 생성자" << endl; }
	~PointXY() { cout << "PointXY 소멸자" << endl; }
	void Print() { cout << "PointXY" << endl; }

protected:
	int y_;
};

class PointXZ : virtual public PointX // 가상 상속
{
public:
	PointXZ(int x, int z) : PointX(x), z_(z) { cout << "PointXZ 생성자" << endl; }
	~PointXZ() { cout << "PointXZ 소멸자" << endl; }
	void Print() { cout << "PointXZ" << endl; }

protected:
	int z_;
};

class PointXYZ : public PointXY, public PointXZ
{
public:
	PointXYZ(int x, int y, int z) : PointX(0), PointXY(x, y), PointXZ(x, z), xyz_(0) { cout << "PointXYZ 생성자" << endl; }
	~PointXYZ() { cout << "PointXYZ 소멸자" << endl; }
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