#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>

double compoundInterest(double invest, double rate)
{
    double compoundRate = 1.0f;
    
    for(int i = 0; i < 10; i++)
    {
        compoundRate *= ( 1.0 + rate/100.0);
    }
    
    return invest * compoundRate;    
}

int main(int argc, char const *argv[])
{
    double invest, rate;
    std::cout << "your invest is : $";
    std::cin >> invest;
    std::cout << "The interest rate is : ";
    std::cin >> rate;

    std::cout << "the value of the investment after 10 years is : $" << compoundInterest(invest, rate);

    return 0;
}