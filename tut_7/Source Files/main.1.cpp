#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

int solveForX(std::string equation);
int valEauqtion(std::string equation);
std::string trimWhitespace(std::string str);

int main(int argc, char const *argv[])
{
    std::cout << "Enter your equation to be solved :" << std::endl;
    std::string equation;
    getline(std::cin, equation);
    std::cout << "the value of x is :" << solveForX(equation) << std::endl;

    return 0;
}

int solveForX(std::string equation)
{

    int x = 0, left = 0, right = 0, sign = -1;
    // split equation with '='
    int eqInd = equation.find('=', 0);
    // find x
    int xInd = equation.find('x', 0);

    if (xInd == 0 || (xInd < eqInd && equation[xInd - 2] == '+') || (xInd > eqInd && equation[xInd - 2] == '-'))
        sign = 1;

    // calculate values without x
    equation.replace(xInd, 1, "0");

    left = valEauqtion(equation.substr(0, eqInd));
    right = valEauqtion(equation.substr(eqInd + 1));

    // return x
    return (right - left) * sign;
}

int valEauqtion(std::string equation)
{
    std::cout << "caculating " << equation << "\t : ";
    int val = 0, op = 1;
    std::stringstream ss(trimWhitespace(equation));
    std::string tmp = "";

    while (getline(ss, tmp, ' '))
    {
        if (tmp[0] == '+')
            op = 1;
        else if (tmp[0] == '-')
            op = -1;
        else
            val += std::stoi(tmp) * op;
    }
    std::cout << val << "\n";

    return val;
}

std::string trimWhitespace(std::string str)
{
    std::string whitespcaes(" \t\f\n\r");
    str.erase(str.find_last_not_of(whitespcaes) + 1);
    str.erase(0, str.find_first_not_of(whitespcaes));
    return str;
}
