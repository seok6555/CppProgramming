#include <iostream>
#include <cstring>
using namespace std;

// 날짜 저장 클래스
class Date
{
public:
	Date(int year, int month, int day) : year_(year), month_(month), day_(day) {}
	void Print() {
		cout << "year	: " << year_ << endl;
		cout << "month	: " << month_ << endl;
		cout << "day	: " << day_ << endl;
	}

protected:
	int year_;
	int month_;
	int day_;
};

// 시간 저장 클래스
class Time
{
public:
	Time(int hour, int minute, int second) : hour_(hour), minute_(minute), second_(second) {}
	void Print() {
		cout << "hour	: " << hour_ << endl;
		cout << "minute	: " << minute_ << endl;
		cout << "second	: " << second_ << endl;
	}

protected:
	int hour_;
	int minute_;
	int second_;
};

// 날짜 시간 동시 저장 클래스
class DateTime : public Date, public Time
{
public:
	DateTime(int year, int month, int day, int hour, int minute, int second, string to_do)
		: Date(year, month, day), Time(hour, minute, second), to_do_(to_do) {}
	void Print() {
		Date::Print();
		Time::Print();
		cout << "to_do	: " << to_do_ << endl;
	}
private:
	string to_do_;	// 해당 시간에 해야할 일을 의미하는 문자열.
};

int main() {
	DateTime dt(2023, 10, 23, 15, 20, 30, "homework");
	dt.Print();
}