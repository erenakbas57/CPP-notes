#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            continue;
        std::cout << i << std::endl;
    }
    std::cout << "************\n";
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        std::cout << i << "\n";
    }
}