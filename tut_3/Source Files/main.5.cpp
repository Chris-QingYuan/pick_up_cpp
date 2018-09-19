#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>

/*
* pointers
*/

void assignAge(int* pAge)
{
    *pAge = 36;
}

int main(int argc, char const *argv[])
{
    int age = 25;
    assignAge(&age);
    std::cout << age;    

    return 0;
}