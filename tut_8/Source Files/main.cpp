#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

int fib(int num);

int main(int argc, char const *argv[])
{
    int index;
    std::cout << "get fibonacci index : ";
    std::cin >> index;
    printf("fib(%d) = %d\n", index, fib(index));
}

int fib(int num)
{
    if (num <= 1)
        return num;
    return (fib(num - 1) + fib(num - 2));
}
