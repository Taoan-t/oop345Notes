/* Internal Linkage-- The C++ keyword static
   A name with internal linkage refers to an entity that is invisible outside its own translation unit,
   but visible to other scopes within its translation unit. */

#include <iostream>
using namespace std;
void addOne() {
   static int val = 0; 
   // change the lifetime of the variable "val", it created and initialized only once 
   // it is invisible to other scopes within its translation unit
   val++;
   cout << val << endl;
}

int main() {
   for (int i = 0; i < 10; i++) {
      addOne();
   }
   return 0;
}