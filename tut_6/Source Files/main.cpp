#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

std::string ceasarCipher(std::string str, int shift, bool encrypt);

int main(int argc, char const *argv[])
{

    std::string str = "what else do you want that is what you need";
    std::string encryped = ceasarCipher(str, 4, true);
    std::string decryped = ceasarCipher(encryped, 4, false);
    std::cout << "encryped : " << encryped << std::endl;
    std::cout << "decryped : " << decryped << std::endl;

    return 0;
}

std::string ceasarCipher(std::string str, int shift, bool encrypt)
{
    std::string res = "";
    shift = encrypt ? shift : -shift;

    for (char c : str)
        res += (char)((int)c + shift);

    return res;
}
