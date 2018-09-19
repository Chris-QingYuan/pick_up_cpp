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

    int divisor;
    std::vector<int> vecVal2;
    std::cout << "the divisor : ";
    std::cin >> divisor;

    std::copy_if(vecVal.begin(), vecVal.end(),
                 std::back_inserter(vecVal2), [divisor](int x) { return x % divisor == 0; });

    for(int ele : vecVal2) std::cout << ele << "\t";

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