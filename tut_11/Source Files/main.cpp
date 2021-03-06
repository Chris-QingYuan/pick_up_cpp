#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <cmath>
#include <algorithm>

struct Shape
{
    double length, width;
    Shape(double len = 0, double wid = 0)
    {
        this->length = len;
        this->width = wid;
    }

    double area()
    {
        return length * width;
    }

  private:
    int id;
};

struct Circle : Shape
{
    Circle(double rad)
    {
        this->length = rad;
    }
    double area()
    {
        return 3.14159 * std::pow(length / 2, 2);
    }
};

int main(int argc, char const *argv[])
{   
    int y;
    int x = y = 3;
    std::cout << "x : " <<  x  << "y : " <<  y  << "\n";

    return 0;
}
