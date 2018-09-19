#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    std::vector<int> intVec(10);
    std::iota(std::begin(intVec), std::end(intVec), 0);

    for (int i = 0; i < intVec.size(); i++)
    {
        std::cout << intVec[i] << std::endl;
    }

    // for (auto el : intVec)
    // {

    //     std::cout << el << std::endl;
    // }

    int val = 8;
    
    if (val % 2 == 0) {
        std::cout << val << " is even";
    }
    

    return 0;
}
