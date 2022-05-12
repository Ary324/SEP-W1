// Mufleh Al-Shatnawi, Seneca -SDDS
// May, 2020
// demonstrates character variables
#include <iostream> //for cout, etc.
using namespace std;
// a byte is 8 bits
constexpr size_t byte = 8;
int main()
{

	//wchar_t k, m, n, p;

	//k = L'[';    // character - note the leading L
	//m = L'\133'; // octal - note the leading L'\
 //   n = L'\x5b'; // hexadecimal - note the leading L'\x
	//p = L'\X5B'; // hexadecimal - note the leading L'\X
	//cout << "sizeof wchar_t in bits is: " << sizeof(wchar_t) * byte << endl;
	//cout << "sizeof k in bits is: " << sizeof(k) * byte << endl;
	//cout << "sizeof  p bits is: " << sizeof(p) * byte << endl;

	//char16_t k, m, n;
	//k = u'[';    // character - note the leading u
	//m = u'\133'; // octal - note the leading u'\
 //	cout << "sizeof wchar_t in bits is: " << sizeof(char16_t) * byte << endl;
	//cout << "sizeof k in bits is: " << sizeof(k) * byte << endl;
	//cout << "sizeof p bits is: " << sizeof(m) * byte << endl;
	//cout << static_cast<char>(k) << endl;

	char charvar1 = 'A'; //define char variable as character
	char charvar2 = '\t'; //define char variable as tab
	cout << charvar1; //display character
	cout << charvar2; //display character
	charvar1 = 'B'; //set char variable to char constant
	cout << charvar1; //display character
	cout << '\n'; //display newline character
	char charvar3 = 'A' + 2;
	cout <<"Add 2 to \'A\' to get :"<< charvar3<<endl; //display character

	return 0;
}