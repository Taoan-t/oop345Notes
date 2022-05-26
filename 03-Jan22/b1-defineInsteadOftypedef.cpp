#include <iostream>
using namespace std;

// #define -  means search and replace
#define intPtr int* // replace intPtr with integer pointer

#define firstHalf for(int i=0;
#define theRest i<5;i++){

int main() {
   intPtr   // replaced by int* before compilation 
      p,  // pointer
      q = 100; // just an int
   p = &q;
   cout << *p << endl;
   firstHalf theRest
      cout << i << endl;
   }
return 0;
}