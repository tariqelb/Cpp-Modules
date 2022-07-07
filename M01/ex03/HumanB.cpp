#include "HumanB.hpp"

std::string HumanB::getName(void)
{
    return (name);
}

void    HumanB::setWeapon(Weapon& w)
{
    weapon = &w;
}

void    HumanB::attack(void)
{
    if (weapon && this->weapon == NULL)
    {
        std::cout << getName() << ": doesnt have a weapon\n";
    }
    else
        std::cout << getName() << " attacks with their " << weapon->getType() << "\n";
}


HumanB::HumanB(std::string s):name(s), weapon(NULL){}

HumanB::~HumanB(){}