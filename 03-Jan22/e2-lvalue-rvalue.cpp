#include <iostream>
using namespace std;

void display(int& a) {
   cout << "lvalue: " << a << endl;
}
void display(int&& a) { // double & means making a to rvalue
   cout << "rvalue: " << a << endl;
}


int main() {
   int i = 10;
   display(i);
   display(25);
   return 0;
}
