#include "Zombie.hpp"

int main(void)
{
    Zombie *z;

    z = zombieHorde(5, "foobar");
    delete [] z;
    return (0);
}