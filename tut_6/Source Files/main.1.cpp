#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

std::vector<std::string> strToVec(std::string str, char separator);

int main(int argc, char const *argv[])
{
    std::vector<std::string> vec = strToVec("what is in this string?", ' ');

    for (std::string ele : vec)
    {
        std::cout << ele << std::endl;
    }

    return 0;
}

std::vector<std::string> strToVec(std::string str, char separator)
{
    std::vector<std::string> words;

    std::stringstream ss(str);
    std::string tmp;

    while (getline(ss, tmp, separator))
    {
        words.push_back(tmp);
    }

    return words;
}
