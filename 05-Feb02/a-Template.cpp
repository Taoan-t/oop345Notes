#include <iostream>
/* 
   Three categories of polymorphism:
1. ad-hoc polymorphism 
   - to implement by overloading 
2. inclusion polymorphism 
   - by overiding
3. parametric polymorphism 
   - by templates  
*/


/* 
Template Declaration/Definition for a family of function
   template <a parameter list> - template header
   return-type function-name(...){} - template body 
*/

/* 
Template Declaration/Definition for a family of classes
   template <a parameter list> - template header
   class-key class-name{} - template body 
*/

/* 
Template Declaration/Definition for a family of variables
   template <a parameter list> - template header
   type variable-name{} - template body 
*/
template <class T>
void faa(T a) {
   std::cout << a << std::endl;
}


template <typename T> // template header 
void foo() {
   T value;
   value = 1.5;
   std::cout << value << '\n';
}

int main() {

   foo<int>();    // template instantiation 
   foo<double>(); // template instantiation
   return 0;
}
