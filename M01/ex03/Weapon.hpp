#ifndef _WEAPON_H_
# define _WEAPON_H_

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        std::string getType(void);
        void        setType(std::string s);

    Weapon();
    Weapon(std::string s);
    ~Weapon();
};

#endif