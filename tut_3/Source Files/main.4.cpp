#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>

/*
* pointers
*/

int main(int argc, char const *argv[])
{
    int age = 25;
    int *pAge = NULL;

    // reference mark to get address
    pAge = &age;

    std::cout << "Address : " << pAge << std::endl;
    std::cout << "value : " << *pAge << std::endl;

    int intArr[] = {2, 3, 4, 5};
    int *pIntArr = intArr;

    for (int i = 0; i < 4; i++)
    {
        std::cout << (i+1) << *pIntArr << " - Address : " << pIntArr << std::endl;
        pIntArr++;
    }

    return 0;
}

int assignAge(int age)
{
    return 24;
}