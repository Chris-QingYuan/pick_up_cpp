#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

int main(int argc, char const *argv[])
{

    srand(time(NULL));
    int randNum = std::rand() % 11;
    int guess = 11;

    while (guess != randNum)
    {
        std::cout << "try guessing the random number : ";
        std::cin >> guess;

        if (guess > randNum)
            std::cout << "too big\n";

        if (guess < randNum)
            std::cout << "too small\n";
    }
    std::cout << "right on!\n";

    return 0;
}
