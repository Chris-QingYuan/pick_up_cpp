#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

std::vector<std::string> strToVec(std::string str, char separator);

std::string vecToStr(std::vector<std::string> vec, char separator);

int main(int argc, char const *argv[])
{
    std::vector<std::string> vecCust(3);

    vecCust[0] = "Bob";
    vecCust[1] = "Susan";
    vecCust[2] = "Lee";

    std::string sCusts = vecToStr(vecCust, ' ');
    std::cout << sCusts << "\n";

    return 0;
}

std::string vecToStr(std::vector<std::string> vec, char separator)
{
    std::string res = "";

    for (std::string ele : vec)
    {
        res.append(ele);
        res += separator;
    }
    return res;
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
