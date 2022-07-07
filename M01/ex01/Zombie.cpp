#include "Zombie.hpp"

Zombie*     zombieHorde(int N, std::string name)
{
    Zombie* zom =  new Zombie[N];
    int     i;

    i = 0;
    while (i < N)
    {
        zom[i].setName(name);
        i++;
    }
    return (zom);
}

void    Zombie::announce(void)
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
}

std::string Zombie::getName(void)
{
    return (name);
}

void        Zombie::setName(std::string zName)
{
    name = zName;
}

Zombie::Zombie(){}

Zombie::~Zombie(){}