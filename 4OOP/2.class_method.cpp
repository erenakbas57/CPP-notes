#include <iostream>
using namespace std;

class MyClass {
  public:
    void myMethod() {
      cout << "Hello World!";
    }
};

        // ALTENATIVE USING //
/*
class MyClass {
  public:
    void myMethod();
};

void MyClass::myMethod() {
  cout << "Hello World!";
}
*/

int main() {
  MyClass myObject;
  myObject.myMethod();
  return 0;
}