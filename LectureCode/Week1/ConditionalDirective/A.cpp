#include <iostream>
using namespace std;

#define US 0
#define ENGLAND 1
#define NETHERLANDS 2
#define DEBUG 
//#undef DEBUG
//We define Netherlands as country, then we get Euro.
//If we define England we get pounds and so on.
#define CURRENCY NETHERLANDS
#define TABLE_SIZE 10
#define ARRAY_SIZE 10
int main(int argc, char* argv[])
{
	#if CURRENCY == US
		char acurrency[] = { "Dollar" };
		#define CHOSEN US
	#elif CURRENCY == ENGLAND
		char acurrency[] = { "Pound" };
		#define CHOSEN ENGLAND
	#elif CURRENCY == NETHERLANDS
		char acurrency[] = { "Euro" };
		#define CHOSEN NETHERLANDS
	#else
		char acurrency[] = { "Euro" };
	#endif

		// If CHOSEN is not defined, then we get default.
	#ifndef CHOSEN
		cout << endl << "Using Default Currency " << acurrency << endl;
	#else
		cout << endl << "Chosen Currency " << acurrency << endl;
	#endif

	#ifdef DEBUG 
		cout << "Welcome debug message\n";
	#endif 




	#if TABLE_SIZE>200
		#undef TABLE_SIZE
		#define TABLE_SIZE 200
	#elif TABLE_SIZE<50
		#undef TABLE_SIZE
		#define TABLE_SIZE 50
	#else
		#undef TABLE_SIZE
		#define TABLE_SIZE 100
	#endif
			int table[TABLE_SIZE];

//#undef TABLE_SIZE

		#if !defined TABLE_SIZE
			#define TABLE_SIZE 100
		#elif defined ARRAY_SIZE
			#define TABLE_SIZE ARRAY_SIZE
			int table3[TABLE_SIZE]; 
		#endif
}