/*
Type Alignmentan 
alignment requirement --  the number of bytes between successive addresses of objects of a given type.
alignof() -- returns the alignment requirement of its argument type.
alignas() -- specify the alignment of an object type.
*/
#include <iostream>
using namespace std;

struct foo1 {  // sorted descending to save space
   double a;
   double b;
   double c;
   int i;
   char ch;
};
struct foo2 {  // not sorted occupies more space
   double a;
   char ch;
   double b;
   int i;
   double c;
};
int main() {
   cout << sizeof(foo1) << endl;// 32
   cout << sizeof(foo2) << endl;// 40
   std::cout << alignof(int) << std::endl; // 4
   std::cout << alignof(double) << std::endl; // 8
   return 0;
}