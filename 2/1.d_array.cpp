#include <iostream>
using namespace std;

int main()
{
    int three_array[3][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7 ,8 ,9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22,23, 24},
            {25, 26, 27}
        }
    };
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            for (size_t k = 0; k < 3; k++)
                cout << three_array[i][j][k] << endl;
        }
    }
    
}