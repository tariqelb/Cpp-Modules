#ifndef _HUMANB_H_
# define _HUMANB_H_

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon*     weapon;
    public:
        std::string getName(void);
        void        attack(void);
        void        setWeapon(Weapon& w);

    HumanB(std::string s);
    ~HumanB();
};

#endif