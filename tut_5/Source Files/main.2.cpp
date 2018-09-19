#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

int main(int argc, char const *argv[])
{
    std::vector<std::string> strVec(9);
    std::string str("This is a string");
    strVec[0] = str;

    std::cout << str.length();
    std::cout << str.front() << str.back() << "\n";
    std::cout << str[17] << "\n";

    std::string str_1(str);
    strVec[1] = str_1;

    std::string str_2(str, 3);
    strVec[2] = str_2;

    std::string str_3(3, 't');
    strVec[3] = str_3;

    strVec[4] = str_3.append(" is not tttmm,");

    str += ", or is it?";

    for (std::string ele : strVec)
    {
        std::cout << ele << std::endl;
    }

    std::cout << str << std::endl;

    return 0;
}
