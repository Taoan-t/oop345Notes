#include <iostream>
using namespace std;
int main() {
   int i = 011; // output is: 9, because a value starts with 0 goes to Octal base
   cout << i << endl;
   return 0;
}
/*
12345 = 1x8^4+2x8^3.....
the leading 0 - octal 
the leading 0x/0X - hexadecimal
the ending l/L - long int
the ending u/U - unsigned
*/

/*
wchar_t -- a wide character type
*/