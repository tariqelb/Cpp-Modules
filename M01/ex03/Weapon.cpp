#include "Weapon.hpp"

const std::string&     Weapon::getType(void)
{
    return (type);
}

void    Weapon::setType(std::string s)
{
    type = s;
}

Weapon::Weapon(std::string w):type(w)
{
}
Weapon::Weapon(){}
Weapon::~Weapon(){}