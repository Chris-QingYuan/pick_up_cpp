#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

// global var
int g_iRandNum = 0;

//constant
const double PI = 3.14159;

int main(int argc, char const *argv[])
{
    //dtypes
    bool bVar = true;
    char chVar = 'C';
    //positve 16bit
    unsigned short int usiVar = 32;
    short int siVar = -4567;
    int iVar = 65537;
    long lVar = 1234567891;
    float fVar = 3.14;
    double dVar = 3.445244131;
    long double ldVar = 3.452366262;
    auto aVar = false;

    

    std::cout << "Min bool " << std::numeric_limits<bool>::min() << "\n";
    std::cout << "Max bool " << std::numeric_limits<bool>::max() << "\n";

    std::cout << "Min unsigned short int " << std::numeric_limits<unsigned short int>::min() << "\n";
    std::cout << "Max unsigned short int " << std::numeric_limits<unsigned short int>::max() << "\n";

    std::cout << "Min short int " << std::numeric_limits<short int>::min() << "\n";
    std::cout << "Max short int " << std::numeric_limits<short int>::max() << "\n";

    std::cout << "Min int " << std::numeric_limits<int>::min() << "\n";
    std::cout << "Max int " << std::numeric_limits<int>::max() << "\n";

    std::cout << "Min long " << std::numeric_limits<long>::min() << "\n";
    std::cout << "Max long " << std::numeric_limits<long>::max() << "\n";

    std::cout << "Min float " << std::numeric_limits<float>::min() << "\n";
    std::cout << "Max float " << std::numeric_limits<float>::max() << "\n";

    std::cout << "Min long double " << std::numeric_limits<long double>::min() << "\n";
    std::cout << "Max long double " << std::numeric_limits<long double>::max() << "\n";

    // Get the number of bytes used by a type
    std::cout << "int Size " << sizeof(int) << "\n";
    
    
    // More about printf()
    // char, int, 5 space right justified int, 
    // 3 decimal float / double, string specifiers
    printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");

    return 0;
}
