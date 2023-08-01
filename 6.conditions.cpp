#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Sayı gir (1, 2, 3): ";
    int x;
    cin >> x;
    if (x == 1)
        cout << "if' e girdi:\n";
    else if (x == 2)
        cout << "else if'e girdi:\n";
    else
        cout << "ekse'e girdi:\n";
}