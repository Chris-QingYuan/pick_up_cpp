#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <algorithm>

std::vector<int> generateRandVec(int numOfNums,
                                 int min, int max);

int main(int argc, char const *argv[])
{
    std::vector<int> vecVal = generateRandVec(10, 1, 50);

    std::vector<int> vec1 = {2, 3, 4, 6, 7};
    std::vector<int> vec2 = {2, 3, 4, 4, 3};
    std::vector<int> vec3(5);

    transform(vec1.begin(), vec1.end(), vec2.begin(), vec3.begin(), [](int x, int y) { return x + y; });

    for (int ele : vec3)
        std::cout << ele << "\t";

    return 0;
}

std::vector<int> generateRandVec(int numOfNums,
                                 int min, int max)
{
    std::vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;
    while (i < numOfNums)
    {
        randVal = min + std::rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}