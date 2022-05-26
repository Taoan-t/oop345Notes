/* Command-line Arguments*/
#include <iostream>
using namespace std;
int main(int argc, char* argv[], char* env[]) {
// the first parameter receives the number of arguments supplied on the command line from the operating system
// the second parameter receives the address of an array of pointers to C-style null-terminated strings.
// the third parameter receives the address of all the environment variables of the operating system
   int i;
   for (i = 0; i < argc; i++) {
      cout << (i + 1) << ": " << argv[i] << endl;
   }
   for (i = 0; env[i]; i++) {
      cout << (i + 1) << ": " << env[i] << endl;
   }
   return 0; // returns control to the operating system
}