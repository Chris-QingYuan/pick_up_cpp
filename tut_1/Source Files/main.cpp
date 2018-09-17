#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

const float MILE_TO_KM = 1.60934;

main(int argc, char const *argv[])
{
    std::string sMiles;
    std::cout << "Enter Miles : ";
    getline(std::cin, sMiles);

    int nMiles = std::stoi(sMiles);
    float nKM = nMiles * MILE_TO_KM;

    printf("%d miles equals %.4f kilometers", nMiles, nKM);


    return 0;
}
