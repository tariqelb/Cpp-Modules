#include "HumanA.hpp"
#include "Weapon.hpp"

std::string    HumanA::getName(void)
{
    return (name);
}

void    HumanA::attack(void)
{    
    std::cout << getName() << " attacks with their " << weapon.getType() << "\n";
}

HumanA::HumanA(std::string s, Weapon& w):name(s),weapon(w)
{}
HumanA::~HumanA(){}