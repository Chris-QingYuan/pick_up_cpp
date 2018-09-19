#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

bool isPrime(int num);
std::vector<int> getPrimes(int upLimit);

int main(int argc, char const *argv[])
{
    int num = 0;

    std::cout << "Enter your number :" << std::endl;
    std::cin >> num;
    std::cout.setf(std::ios::boolalpha);

    std::cout << "Is " << num << " prime ? - " << isPrime(num) << std::endl;

    int upLimit = 0;

    std::cout << "Enter the upper limit :" << std::endl;
    std::cin >> upLimit;

    std::vector<int> primeList = getPrimes(upLimit);
    for (int ele : primeList)
        std::cout << ele << "\t";

    return 0;
}

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;

    int i = 2;
    while (i < num / 2)
    {
        if (num % i == 0)
            return false;
        i++;
    }

    return true;
}

std::vector<int> getPrimes(int upLimit)
{
    std::vector<int> resVec;
    if (upLimit >= 2)
        resVec.push_back(2);

    for (int i = 3; i <= upLimit; i += 2)
    {
        if (isPrime(i))
            resVec.push_back(i);
    }
    return resVec;
}
