#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <algorithm>

class Animal
{
  protected:
    std::string name;
    double height;
    double weight;

  private:
    static int numOfAnimals;

  public:
    std::string getName() { return name; }
    void setName(std::string name) { this->name = name; }

    double getHeight() { return height; }
    void setHeight(double height) { this->height = height; }

    double getWeight() { return weight; }
    void setWeight(double weight) { this->weight = weight; }

    void setAll(std::string, double, double);
    Animal(std::string, double, double);
    Animal();
    ~Animal();
    static int getNumOfAnimals() { return numOfAnimals; }
    void toString();
};

int Animal::numOfAnimals = 0;
void Animal::setAll(std::string name, double height, double weight)
{
    this->name = name;
    this->height = height;
    this->weight = weight;
}

Animal::Animal(std::string name, double height, double weight)
{
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

Animal::Animal()
{
    this->name = "";
    this->height = 0;
    this->weight = 0;
    Animal::numOfAnimals++;
}

Animal::~Animal()
{
    std::cout << "animal " << this->name << " destroyed\n";
}

void Animal::toString()
{
    std::cout << "animal " << this->name << " is "
              << this->height << " tall and "
              << this->weight << " in weight\n";
}

class Dog : public Animal
{
  private:
    std::string sound = "woof";

  public:
    void makeSound()
    {
        std::cout << "the dog " << this->getName()
                  << " says " << this->sound << "\n";
    }

    Dog(std::string, double, double, std::string);
    Dog() : Animal(){};
    void toString();
};

Dog::Dog(std::string name, double height, double weight, std::string sound) : Animal(name, height, weight)
{
    this->sound = sound;
}

void Dog::toString()
{
    std::cout << "animal " << this->name << " sounds like "
              << this->sound << " is "
              << this->height << " tall and "
              << this->weight << " in weight\n";
}

int main(int argc, char const *argv[])
{
    Animal pig;
    pig.toString();
    pig.setAll("piggt", 1, 2);
    pig.toString();
    std::cout << Animal::getNumOfAnimals();

    Animal saddi("saddi", 34, 6);
    saddi.toString();
    std::cout << Animal::getNumOfAnimals();

    Dog spuu("spuu",54,30,"wouw");
    spuu.toString();
    return 0;
}
