#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


int main(int argc, char const *argv[])
{
    int age = 0;
    std::cout << "ENter your age : " << std::endl;
    std::cin >> age;

    
    if (age >= 1 && age <= 18) {
        std::cout << "this is important";
    }
    else if (age == 21 || age == 50) {
        std::cout << "important too";
    }
    else
    {
        std::cout << "not that important";
    }
    


    return 0;
}
