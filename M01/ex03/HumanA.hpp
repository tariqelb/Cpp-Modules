#ifndef _HUMANA_H_
# define _HUMANA_H_

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon&      weapon;

    public:
        std::string getName(void);
        void        attack(void);

    HumanA(std::string s, Weapon& w);
    ~HumanA();
};

#endif