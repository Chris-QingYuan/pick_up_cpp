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

std::vector<int> generateFibList(int len);

int main(int argc, char const *argv[])
{
    std::vector<int> vecVal = generateFibList(10);

    for (int ele : vecVal)
        std::cout << ele << "\t";

    return 0;
}

std::vector<int> generateFibList(int len)
{

    std::vector<int> list;
    if (len < 1)
        return list;

    list.push_back(0);
    if (len == 1)
        return list;

    list.push_back(1);
    if (len == 2)
        return list;

    for (int i = 2; i < len; i++)
    {
        list.push_back(list[i - 1] + list[i - 2]);
    }
    return list;
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