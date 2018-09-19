#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    std::vector<int> intVec(10);
    std::iota(std::begin(intVec), std::end(intVec), 1);

    for (int val : intVec)
    {
        if (val % 2 == 0)
        {
            std::cout << val << " is even\n";
        }
    }

    return 0;
}
