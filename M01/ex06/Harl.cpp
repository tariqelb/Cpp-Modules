#include "Harl.hpp"

void    harl::debug(void)
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n\n";
}

void    harl::info(void)
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void    harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n\n";
}

void    harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

int sweety(std::string s)
{
    int i;
    std::string str[4] = 
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    i = 0;
    while (i < 4)
    {
        if (s == str[i])
            break;
        i++;
    }
    return (i);
}

void   harl::complain(std::string s)
{
    int sweet;

    sweet = sweety(s);
    switch ( sweet )
    {
        case 0 :
        {
            debug();
        }
        case 1 :
        {
            info();
        }
        case 2 :
        {
            warning();
        }
        case 3 :
        {
            error(); 
            break ;
        }
        default :
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}