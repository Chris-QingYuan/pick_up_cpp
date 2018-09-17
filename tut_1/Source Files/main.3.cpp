#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

main(int argc, char const *argv[])
{
    std::string sQ ("Enter Num1 : ");
    std::string sNum1, sNum2;
    std::cout << sQ;
    getline(std::cin, sNum1);
    std::cout << "Enter Num2 : ";
    getline( std::cin, sNum2);

    int nNum1 = std::stoi(sNum1);
    int nNum2 = std::stoi(sNum2);

    printf("%d + %d = %d \n", nNum1, nNum2, (nNum1 + nNum2));
    

    return 0;
}
