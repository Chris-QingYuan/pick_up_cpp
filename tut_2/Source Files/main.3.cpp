#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, char const *argv[])
{

    int intArr_0[10] = {1};
    int intArr_2[] = {2, 3, 4};

    std::cout << "the array car itself " << intArr_0 << std::endl;

    for (int i = 0; i < sizeof(intArr_0) / sizeof(intArr_0[0]); i++)
    {
        std::cout << *(intArr_0 + i) << std::endl;
    }

    int intArr_3d[2][3][4];
    intArr_3d[0][2][1] = 5;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                std::cout << intArr_3d[i][j][k] << ", ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
