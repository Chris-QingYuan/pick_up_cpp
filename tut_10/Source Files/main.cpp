#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <algorithm>

class FightingUnit
{
  protected:
    double health;
    double attack;
    double block;

  public:
    FightingUnit(double health,
                 double attack,
                 double block)
    {
        this->health = health;
        this->attack = attack;
        this->block = block;
    }

    double dealAttack()
    {
        return this->attack * (90 + rand() % 20) * .01;
    }

    double receiveAttack(double attack)
    {
        int dmg = attack * (100 - this->block) * .01;
        this->health -= dmg;
        return dmg;
    }

    double getHealth();
};

double FightingUnit::getHealth() { return this->health; }

class Warrior : public FightingUnit
{
  private:
    std::string name;

  public:
    Warrior(std::string name,
            double health,
            double attack,
            double block) : FightingUnit(health, attack, block)
    {
        this->name = name;
    }

    std::string getName() { return this->name; }
};

class Battle
{
  private:
    double area;

  public:
    Battle(double area) { this->area = area; }

    static void startFight(Warrior w1, Warrior w2, bool w1Init);
};

void Battle::startFight(Warrior w1, Warrior w2, bool w1Init)
{
    std::cout << "the fight between "
              << w1.getName() << " and "
              << w2.getName() << " starts Now!\n";

    bool w1turn = w1Init;

    while (w1.getHealth() > 0 && w2.getHealth() > 0)
    {

        if (w1turn)
        {
            std::cout << w1.getName() << " attacks "
                      << w2.getName() << " and deals "
                      << w2.receiveAttack(w1.dealAttack())
                      << " damage\n";
            std::cout << w2.getName()
                      << " is down to " << w2.getHealth()
                      << " health\n";
        }
        else
        {
            std::cout << w2.getName() << " attacks "
                      << w1.getName() << " and deals "
                      << w1.receiveAttack(w2.dealAttack())
                      << " damage\n";
            std::cout << w1.getName()
                      << " is down to " << w1.getHealth()
                      << " health\n";
        }

        w1turn = w1turn ? false : true;
    }

    if (w1.getHealth() > 0)
    {
        std::cout << w2.getName() << " has died and "
                  << w1.getName() << " wins!\nGame Over";
    }
    else
    {
        std::cout << w1.getName() << " has died and "
                  << w2.getName() << " wins!\nGame Over";
    }
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    Warrior thor("Thor", 100, 32, 15);
    Warrior hulk("Hulk", 135, 25, 10);

    Battle::startFight(thor, hulk, true);

    return 0;
}
