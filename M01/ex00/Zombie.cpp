#include "Zombie.hpp"

std::string     Zombie::getName(void)
{
    return (name);
}

void    Zombie::setName(std::string s)
{
    name = s;
}

void    Zombie::announce(void)
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie* newZombie(std::string name)
{
    Zombie* zom = new Zombie(name);
    return (zom);
}

void    randomChump(std::string name)
{
    Zombie zom;
    zom.setName(name);
    zom.announce();
}

Zombie::Zombie(std::string zName):name(zName)
{
}

Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << getName() << ": is died\n";
}