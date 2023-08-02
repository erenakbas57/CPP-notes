#include <iostream>
using namespace std;

/*
class Car {
  public:
    string brand;
    string model;
    int year;

    //constructor böyle olabilir ya da burada deklare edip altta define edebiliriz  
    Car(string x, string y, int z) {
      brand = x;
      model = y;
      year = z;
    }
};
*/

// ALTERNATIVE //
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}