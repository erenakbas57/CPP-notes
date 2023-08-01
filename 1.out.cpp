#include <iostream>
//using namespace std;
//namespace ile std kütüphanesini eklemedik
// bununiçin std:: ve sonrasında fonksiyonu
// yazarak çağırıyoruz

int main() {
  std::cout << "Hello World!";

  std::cout << "\nMerhaba, Ben Eren" << std::endl;
  // \n ya da std::endl kullanabiliriz

  int myNum = 15;
  std::cout << myNum << std::endl;

  int x = 5, y = 6, z = 50;
  std::cout << x + y + z;
  return 0;
}