#ifndef _ZOMBIE_H_
# define _ZOMBIE_H_

#include <iostream>

class Zombie
{
    private:
        std::string name;
    
    public:
        void        announce(void);
        std::string getName(void);
        void        setName(std::string s);

    Zombie();
    ~Zombie();
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif