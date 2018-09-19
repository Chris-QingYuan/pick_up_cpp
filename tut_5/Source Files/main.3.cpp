#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

std::string strToAscii(std::string &str)
{
    std::string res = "";
    const int len = str.length();

    int ascArr[len];

    for (int i = 0; i < len; i++)
    {
        ascArr[i] = str[i];
        res.append(std::to_string(ascArr[i]));
    }
    return res;
};

std::string ascToStr(std::string &str)
{
    std::string res = "";
    int const len = str.length();
    int cur = 0, tmpAsc = 0;

    while (cur < len)
    {
        tmpAsc = std::stoi(str.substr(cur, 2));

        if ((tmpAsc >= 65 && tmpAsc <= 90) || (tmpAsc >= 97 && tmpAsc <= 122))
        {
            res.append(1, tmpAsc);
            cur += 2;
        }
        else
        {
            res.append(1, std::stoi(str.substr(cur, 3)));
            cur += 3;
        }
    }

    return res;
};

int main(int argc, char const *argv[])
{

    std::string usrInput, encryStr = "", decryStr = "";
    std::cout << "Enter your string : ";
    getline(std::cin, usrInput);

    encryStr = strToAscii(usrInput);

    std::cout << "encryStr : " << encryStr << std::endl;

    decryStr = ascToStr(encryStr);

    std::cout << "decryStr : " << decryStr << std::endl;

    return 0;
}
