#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << "First Num: " << firstNum << "\n";
    cout << "Second Num: " << secondNum << "\n";

    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << "First Num: " << firstNum << "\n";
    cout << "Second Num: " << secondNum << "\n";

    return 0;
}