#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>


std::string trimWhitespace(std::string str);

int main(int argc, char const *argv[])
{

    std::string sCusts = trimWhitespace("       what else do you want     ");
    std::cout << sCusts << "\n";

    return 0;
}

std::string trimWhitespace(std::string str){
    std::string whitespcaes(" \t\f\n\r");
    str.erase(str.find_last_not_of(whitespcaes) + 1);
    str.erase(0, str.find_first_not_of(whitespcaes));
    return str;
}