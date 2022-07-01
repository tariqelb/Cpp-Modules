#include "Zombie.hpp"

int main(void)
{
    Zombie z1;
    Zombie* z2;
    
    randomChump("chump");
    z1.setName("foo");
    z2 = newZombie("bar");
    z1.announce();
    z2->announce();
    delete z2;
    return (0);
}