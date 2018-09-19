#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

void printArr(int *arr, int len);

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 5, 67, 1, 2, 5, 6};
    printArr(arr, sizeof(arr) / sizeof(int));
    return 0;
}

void printArr(int *arr, int len)
{
    int rowNum = len / 3 + (len % 3 > 0);
    int i = 0;
    std::string board = "------------------------";
    while (i < rowNum)
    {
        std::cout << board << std::endl
                  << "|";

        for (int j = 0; j < 3; j++)
        {
            int index = i * 3 + j;
            if (index >= len)
                break;
            printf("%4d\t|", arr[index]);
        }
        std::cout << std::endl;
        i++;
    }
    std::cout << board << std::endl;
}
