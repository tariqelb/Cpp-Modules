#include "Zombie.hpp"

int main(void)
{
    Zombie  *z;
    int     i;

    i = 0;
    z = zombieHorde(5, "foobar");
    while (i < 5)
    {
        z->announce();
        i++;
    }
    delete [] z;
    return (0);
}