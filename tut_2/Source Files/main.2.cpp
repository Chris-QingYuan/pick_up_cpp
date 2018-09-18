#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


int main(int argc, char const *argv[])
{
    // ----- PROBLEM : DETERMINE SCHOOL GRADE -----
    // If age 5 "Go to Kindergarten"
    // Ages 6 through 17 go to grades 1 through 12
    // If age > 17 "Go to college"
    // Enter age : 2
    // Too young for school
    // Enter age : 8
    // Go to grade 3
    // Try to do with 15 or less lines of code

    int age = 0;
    std::cout << "Enter your age : ";
    std::cin >> age;

    
    if (age <= 5) {
        std::cout << "Go to Kindergarden";
    }
    else if(age >= 6 && age <= 17) {
        printf("Go to grade %d", (age - 5));
    }
    else {
        printf("Go to college");
    }
    
    


    return 0;
}
