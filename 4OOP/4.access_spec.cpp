#include <iostream>
using namespace std;

/*
C++ dilinde üç tane erişim belirleyici vardır:


**PUBLIC**
sınıfın içinden ve sınıfın dışından doğrudan erişim sağlar. 


**PRIVATE**
sadece sınıfın içinden erişim sağlar. Sınıfın dışından doğrudan bu 
üyelere erişmek mümkün değildir. Yani, diğer kodlar tarafından doğrudan 
değiştirilmesini veya okunmasını istemediğiniz üye değişkenleri veya 
fonksiyonları "private" olarak belirtebilirsiniz. 
Bu, sınıfın iç yapısının dış dünyadan gizlenmesine ve daha güvenli 
bir kod oluşturulmasına yardımcı olur. sınıf içinde erişim sağlamak için 
**getter (okuma fonksiyonu) ve **setter (yazma fonksiyonu) gibi aracı 
fonksiyonlar kullanılabilir.


**PROTECTED**
Bu erişim belirleyici, "private" gibi sadece sınıfın içinden 
erişim sağlar, ancak kalıtım (inheritance) durumunda alt sınıfların bu 
üyelere erişimini sağlar. Yani, alt sınıfların bu üyelere doğrudan erişimi 
mümkündür. Bu, nesne tabanlı programlamada kalıtım hiyerarşisi oluşturulduğunda 
kullanışlı olabilir.
*/


class MyClass {
  public:
    int x;
  private:
    int y;
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  // myObj.y = 50;  // private olduğu için erişilemez
  return 0;
}