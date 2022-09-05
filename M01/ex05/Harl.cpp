/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:49:32 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/17 20:27:15 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon";
	std::cout << " for free. I’ve been coming for years whereas";
	std::cout << " you started working here since last month.";
	std::cout << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for";
	std::cout << " my 7XL-double-cheese-triple";
	std::cout << "-pickle-specialketchup burger.";
	std::cout << " I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon";
	std::cout << " costs more money. You didn’t put enough";
	std::cout << " bacon in my burger! If you did, I wouldn’t";
	std::cout << " be asking for more!" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::carbon(void)
{
    std::cout << "Wrong parameter" << std::endl;
}

void    Harl::complain(std::string level)
{
    fn      fun[5];
    int     i;
    
    fun[0] = &Harl::warning;
    fun[1] = &Harl::debug;
    fun[2] = &Harl::info;
    fun[3] = &Harl::error; 
    fun[4] = &Harl::carbon; 
    
    std::string s[5] = 
    {
        "warning",
        "debug",
        "info",
        "error",
		"carbon"
    };
    i = 0;
    while (i < 4 && s[i].compare(level))
    { 
        i++;
    }
    (this->*fun[i])();
}
