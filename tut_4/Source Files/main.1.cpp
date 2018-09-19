#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    int height = 0, row = 0;
    std::cout << "How tall is the tree : ";
    std::cin >> height;

    while (row < height)
    {

        for (int i = 0; i < height - 1 - row; i++)
        {
            std::cout << ' ';
        }
        for (int i = 0; i < 2 * row + 1; i++)
        {
            std::cout << '#';
        }
        std::cout << '\n';
        row++;
    }

    for (int i = 0; i < height - 1; i++)
    {
        std::cout << ' ';
    }

    std::cout << '#';

    return 0;
}
