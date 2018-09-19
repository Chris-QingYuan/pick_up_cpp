#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> range(int start, int end, int step)
{
    std::vector<int> res;

    for (int i = start; i < end;)
    {
        res.push_back(i);
        i += step;
    }
    return res;
}

int main(int argc, char const *argv[])
{

    std::vector<int> testVec = range(0, 10, 2);

    for (int el : testVec)
    {
        std::cout << el << std::endl;
    }

    return 0;
}