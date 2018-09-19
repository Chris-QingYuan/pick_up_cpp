#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, char const *argv[])
{
    // std::vector<int> vecNums(2);
    // vecNums[0] = 78;
    // vecNums[1] = 87;

    // vecNums.push_back(20); // add to the end

    // std::cout << "last one : " << vecNums[vecNums.size() - 1] << std::endl;

    std::string strSen = "this is a test string";
    std::vector<std::string> vecWords;
    std::stringstream ss(strSen);
    std::string strSeg;

    char cSeparator = ' ';

    while (getline(ss, strSeg, cSeparator))
    {
        vecWords.push_back(strSeg);
    }

    for (std::string wordStr : vecWords)
    {
        std::cout << wordStr << "\n";
    }

    return 0;
}
