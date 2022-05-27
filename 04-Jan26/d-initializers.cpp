#include <iostream>
#include <string>
using namespace std;
class Owner;
class Name {
   int size;
   string value;
   Owner* owner{};// Step 1
public:
   Name(string val) : value{ val }{// Step 2
      size = 0;  // Step 3, this step is NOT intialziation
   }
};

int main() {
   Name N("fardad"); // Note the three steps of initialization a class
   return 0;
}