#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

std::string replaceAllMathces(std::string str, std::string match, std::string replace);

int main(int argc, char const *argv[])
{

    std::string str = "what else do you want that is what you need", match = "what";
    std::cout << replaceAllMathces(str, match, "who");

    return 0;
}

std::string replaceAllMathces(std::string str, std::string match, std::string replace)
{
    size_t pos = str.find(match, 0), mLen = match.length();

    while (pos != std::string::npos)
    {
        str.replace(pos, mLen, replace);
        pos = str.find(match, pos + 1);
    }

    return str;
}
