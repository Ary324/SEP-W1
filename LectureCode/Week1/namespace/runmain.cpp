#include<iostream>
#include "dot.h"
#include "hat.h"

using namespace std;

 int main() {
     char s[51];

     //leader(s);  // ERROR unidentified function name 
     /*>>>>>>>>>>>>>>>>>>>>>>>>>>*/
     //Visibility

     
	 //dot::leader(s);  // OK
  //   cout << s << endl;

 // //   /*>>>>>>>>>>>>>>>>>>>>>>>>>>*/
 // //   

	 //dot::leader(s);  // OK calls the leader() function declared in dot
  //   cout << s << endl;
  //   hat::leader(s);  // OK calls the leader() function declared in hat
  //   cout << s << endl;

 //    /*>>>>>>>>>>>>>>>>>>>>>>>>>>*/
     // using Declaration
	 //using dot::leader;
  //   leader(s);          // ok calls the leader() function declared in dot
  //   cout << s << endl;
  //   using hat::leader;  // creates ambiguity
  //   /*leader(s);*/
  //   hat::leader(s);     // ok calls the leader() function declared in hat 
  //   cout << s << endl;
 //    /*>>>>>>>>>>>>>>>>>>>>>>>>>>*/
 //    //using Directive
     using namespace dot;
     leader(s);            // OK calls the function declared in dot
     cout << s << endl;

     //using namespace hat;  // creates ambiguity
     //leader(s);
     //hat::leader(s);       // resolves the ambiguity in favor of hat
     //cout << s << endl;



     /*>>>>>>>>>>>>>>>>>>>>>>>>>>*/
 }