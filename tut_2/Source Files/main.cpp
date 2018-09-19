#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, char const *argv[])
{
    std::string usrInput, wordTmp;
    std::vector<std::string> wordsVec;

    std::cout << "please enter your calculation : ";
    getline(std::cin, usrInput);

    std::stringstream ss(usrInput);

    while (getline(ss, wordTmp, ' '))
    {
        std::cout << "pushing " << wordTmp << " into vec\n";
        wordsVec.push_back(wordTmp);
    }

    char opr = wordsVec[1][0];

    float num1 = std::stof(wordsVec[0]);
    float num2 = std::stof(wordsVec[2]);

    if (opr == '+')
    {
        std::cout << usrInput << " = " << (num1 + num2);
    }
    else if (opr == '-')
    {
        std::cout << usrInput << " = " << (num1 - num2);
    }
    else if (opr == '*')
    {
        std::cout << usrInput << " = " << (num1 * num2);
    }
    else if (opr == '/')
    {
        std::cout << usrInput << " = " << (num1 / num2);
    }
    else
    {
        std::cout << usrInput << " = nothing";
    }

    return 0;
}
