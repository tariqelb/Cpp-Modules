#include "Harl.hpp"

void    harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void    harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void    harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void    harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void    harl::complain(std::string level)
{
    typedef void (harl::*fn)(void);
    fn      fun[4];
    int     i;
    
    fun[0] = &harl::warning;
    fun[1] = &harl::debug;
    fun[2] = &harl::info;
    fun[3] = &harl::error; 
    
    std::string s[4] = 
    {
        "warning",
        "debug",
        "info",
        "error"
    };
    i = 0;
    while (i < 4)
    {
        
        if (level == s[i])
            (this->*fun[i])();
        i++;
    }
}