#include <iostream>
#include<iomanip>
using namespace std;
////////////////////////////////////////////////////////////////
struct Distance //English distance
{
	int feet;
	float inches;
};
////////////////////////////////////////////////////////////////
const int  n = 5000;
class A {
public:
	struct {
		int x;
		int y;
	}Point[n];

	void init() {
		for (int i = 0; i < 7; i++) {
			this->Point[i].x = i;
			this->Point[i].y = i;
		}
		
	}
	/*A(const A&);
	A& operator=(const A&);
	A(A&&);
	A& operator= (A&&);*/

	friend ostream& operator<<(ostream& cout, const A& a);
};

ostream& operator<<(ostream& cout, const A& a) {
	for (int i = 0; i < 7; i++) {
		cout <<"("<<setw(10)<< a.Point[i].x << "," << a.Point[i].y << ")" << endl;
	}
	return cout;
}


int main()
{
	A a;
	a.init();
	cout << a;

	//struct {
	//	int x;
	//	int y;
	//}Point[7];
	//Point[0].x = 0;
	//Point[0].y = 1;
	//cout << Point[0].x << "," << Point[0].y << endl;
	//int count = 0;
	//for (auto &e : Point) {
	//	e.x = count;
	//	e.y = count;
	//	cout << e.x << "," << e.y << endl;
	//	count++;
	//}



	//Distance d1, d3; //define two lengths
	//Distance d2 = { 11, 6.25 }; //define & initialize one length
	////get length d1 from user
	//cout << "\nEnter feet : "; cin >> d1.feet;
	//cout << "Enter inches : "; cin >> d1.inches;
	////add lengths d1 and d2 to get d3
	//d3.inches = d1.inches + d2.inches; //add the inches
	//d3.feet = 0; //(for possible carry)
	//if (d3.inches >= 12.0) //if total exceeds 12.0,
	//{ //then decrease inches by 12.0
	//	d3.inches -= 12.0; //and
	//	d3.feet++; //increase feet by 1
	//}
	//d3.feet += d1.feet + d2.feet; //add the feet
	//cout << d1.feet << "\' - " << d1.inches << "\" + ";
	//cout << d2.feet << "\' - " << d2.inches << "\" = ";
	//cout << d3.feet << "\' - " << d3.inches << "\"\n";
	return 0;
}