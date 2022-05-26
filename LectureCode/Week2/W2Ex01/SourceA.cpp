#include<iostream>
using namespace std;

class A {
	int x; // private 
public:
	A() :x{ 10 } {}
	A(int a) { this->x = a; }
	A& operator+=(int a) {
		this->x += a;
		return *this;
	}
	int getX() const {
		return this->x;
	}
};
// helper function 
ostream& operator<<(ostream& os,  const A& s) {
	os << "Value of Object is ("<< s.getX() <<")" << endl;
	return os;
}
// compare two object of type A if they have the same value 
bool operator==(const A& s1, const A& s2) {
	return s1.getX() == s2.getX();
}

int main() {
	A a, b(13);
	A c, d;
	cout << a;
	cout << b;
	a += 30; // two operand one of type A, of type int 
	b += 40;
	cout << a;
	cout << b;

	if (a == b) {
		cout << "we have equal objects \n";

	}
	else {
		cout << "we have not equal objects \n";
	}
	if (c == d) {
		cout << "we have equal objects \n";

	}
	else {
		cout << "we have not equal objects \n";
	}

}