#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

std::vector<int> indexOfword(std::string str, std::string match);

int main(int argc, char const *argv[])
{

    std::string str = "what else do you want that is what you need", match = "what";
    std::vector<int> vec = indexOfword(str, match);

    for (int ele : vec)
    {
        std::cout << ele << "\t";
    }

    return 0;
}

std::vector<int> indexOfword(std::string str, std::string match)
{
    std::vector<int> vec;
    int pos = 0;

    while (str.find(match, pos) != std::string::npos)
    {
        pos = str.find(match, pos) + 1;
        vec.push_back(pos - 1);
    }

    return vec;
}
