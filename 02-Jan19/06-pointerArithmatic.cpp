#include <iostream>
using namespace std;
int main() {
   int* p = (int*)8;
   cout << int(p) << endl; // 8
   p++; // the pointer p jumps to the next integer
   cout << int(p) << endl; // 12, because p is an integer pointer (the size of int is 4)

   double* q = (double*)8; 
   cout << int(q) << endl; // 8
   q++;
   cout << int(q) << endl; // 16 (the size of int is 8)

   void* v = (void*)8; // a void pointer v, complier don't know what's the type of v variable
   cout << int(v) << endl; // 8
   v = ((int*)v)+1; 
   cout << int(v) << endl; // 12
   return 0;
}
