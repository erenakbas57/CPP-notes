#include <iostream>
using namespace std;

int main()
{
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName); // üstüne ekledik
    cout << fullName << endl;

    //******************************//

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;
    cout << "The length of the txt string is: " << txt.size() << endl;

    //******************************//
    cout << "Type your full name: ";
    cin >> fullName; // cin ile boşluktan sonrası alınmaz. genelde sayı veri tiplerinde kullanılır
    cout << "Your name is: " << fullName << endl;

    //******************************//

    cout << "Type your full name: ";
    getline (cin, fullName); // girilecek metnin tam korunması için güvenli yol
    cout << "Your name is: " << fullName << endl;
}