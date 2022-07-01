#ifndef _ZOMBIE_H_
# define _ZOMBIE_H_

#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        std::string getName(void);
        void        setName(std::string zName);
        void        announce(void);

    Zombie();    
    ~Zombie();
};

Zombie*     zombieHorde(int N, std::string name);

#endif