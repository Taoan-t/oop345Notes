#include <iostream>
using namespace std;
constexpr char nl = '\n'; //  constexpr means constant expression. 
                     // Like const, but it can also be applied to functions and class constructors
class { // The class doesn't have a name
   bool m_trace = false;
public:
   auto& trace(bool value) { // Note the return type
      m_trace = value;
      return *this;
   }
   auto& operator<<(const char* message) {
      if (m_trace) cout << (message ? message : "(NULLstr)");
      return *this;
   }
   auto& operator<<(int val) {
      if (m_trace) cout << val;
      return *this;
   }
   auto& operator<<(double val) {
      if (m_trace) cout << val;
      return *this;
   }
   auto& operator<<(char ch) {
      if (m_trace) cout << ch;
      return *this;
   }
} tracer;
constexpr int ReadBufferSize = 50;
class Cstr { // the class only has function members, used as a utility
public:
   /* static member function
      1) By declaring a function member as static, you make it independent of any particular object of the class
      2) A static member function can be called even if no objects of the class exist and the static functions are accessed using only the class name and the scope resolution operator ::
      3) A static member function can only access static data member, other static member functions and any other functions from outside the class.
   */
   static void cpy(char* des, const char* src) {
      while (*des++ = *src++); // strcpy (fix for gcc on linux
   }
   static int len(const char* str) {
      const char* end = str;
      while (*end++);
      return static_cast<int>(end - str) - 1;
   }
   static void allocNcpy(char*& des, const char* src) {
      des = new char[len(src) + 1];
      cpy(des, src);
   }
   static char* read(istream& is) { // reading any size of Cstr dynamically and return it
      char* data = new char[ReadBufferSize];
      char* str = data;
      int noOfBuffers = 1;
      bool done;
      do {
         done = true;
         cin.getline(str, ReadBufferSize, '\n'); // if cin fails, it means entry was greater than 50 chars
         if (cin.fail()) {
            noOfBuffers++;  // keep track of number of buffers to add
            char* temp = new char[(ReadBufferSize - 1) * noOfBuffers + 1]; // allocate bigger memory
            Cstr::cpy(temp, data); // copy the already read test into temp
            delete[] data;  // delete the old (too short) memory
            data = temp;    // point to newly large allocated memory 
            str = data + (ReadBufferSize - 1) * (noOfBuffers - 1); // set the read pointer to continue reading the rest of text
            cin.clear();   // clear cin to read again
            done = false;  //we are not done yet
         }
      } while (!done);   // go back and continue reading if not done
      allocNcpy(str, data);
      delete[] data;
      return str;
   }

};


int main() {
   char* name;
   cout << "name: ";
   name = Cstr::read(cin);
   cout << name << endl;
   delete[] name;
   return 0;
}
