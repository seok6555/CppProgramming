#include <iostream>
#include <cstring>
using namespace std;

class String
{
public:
	String(const char* str = "Unknown") :
		len_(strlen(str)), str_(new char[len_ + 1]) {
		strcpy(str_, str);
	}
	String(const String& str) : // 복사 생성자
		len_(str.len_), str_(new char[len_ + 1]) {
		strcpy(str_, str.str_);
	}
	String& operator=(const String& str) { // 대입 연산자
		if (&str == this) return *this; // self-copy 방지
		delete[] str_;
		len_ = str.len_;
		str_ = new char[len_ + 1];
		strcpy(str_, str.str_);
		return *this;
	}
	~String() { delete[] str_; }
	void Print() { cout << str_ << endl; }

private:
	int len_;
	char* str_;
};

int main() {
	String str1 = "C++ Programming";
	String str2 = "Hello C++";
	String str3 = "Operator Overloading";

	str1 = str2 = str3; // 연속적인 대입 연산

	str1.Print();
	str2.Print();
	str3.Print();

	return 0;
}