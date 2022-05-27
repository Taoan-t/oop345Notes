#include <iostream>
using namespace std;
// Union : 
// All the members of union share same memory location. 
// Size of union is decided by the size of largest member of union.

// Purpose of union:
// Save memory by using the same memory region for storing different objects at different times. 
union Vars {
   double a;
   int b;
   char c[8];
};

int main() {
   Vars V;
   cout << sizeof(Vars) << endl; 
   cout << alignof(Vars) << endl;
   cout << unsigned(&V.a) << endl;
   cout << unsigned(&V.c) << endl;
   V.a = 123456.789;
   cout << V.a << endl;
   V.b = 123456;
   cout << V.b << endl;
   for (int i = 0; i < 8; i++) {
      V.c[i] = 'A' + i;
   }
   for (int i = 0; i < 8; i++) {
      cout << V.c[i];
   }
   cout << endl;
   cout << V.a << endl;
   cout << V.b << endl;
   

   return 0;
}