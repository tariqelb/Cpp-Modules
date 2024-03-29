/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:22:33 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/17 20:22:36 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger.";
	std::cout << std::endl << "I really do!" << std::endl << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did,";
	std::cout << " I wouldn’t be asking for more!" << std::endl << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl << std::endl;
}

int sweety(std::string level)
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
    while (i < 4 && str[i].compare(level))
    {
        i++;
    }
    return (i);
}

void   Harl::complain(std::string level)
{
    int sweet;

    sweet = sweety(level);
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
