#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>

/*
* pointers
*/
void doubleArray(int* arr, int size)
{
    
    for(int i = 0; i < size; i++)
    {
        *arr = *arr * 2;
        arr++;
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {2,3,4,5};
    doubleArray(arr,4);
    
    for(int el : arr)
    {
        std::cout << el << std::endl;
    }
    

    return 0;
}