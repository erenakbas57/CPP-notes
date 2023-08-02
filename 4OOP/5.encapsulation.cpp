#include <iostream>
using namespace std;

/*
** Neden Kapsülleme? **
-> Sınıf niteliklerinizi (mümkün olduğunca sık) özel olarak 
bildirmek iyi bir uygulama olarak kabul edilir. Kapsülleme, 
verilerinizin daha iyi kontrol edilmesini sağlar, çünkü siz 
(veya başkaları) kodun bir bölümünü diğer bölümleri etkilemeden 
değiştirebilirsiniz.

-> Artan veri güvenliği
*/

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}