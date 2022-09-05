/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:43:42 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/18 12:57:47 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

std::string HumanB::getName(void)
{
    return (this->name);
}

void    HumanB::setWeapon(Weapon& w)
{
    weapon = &w;
}

void    HumanB::attack(void)
{
    if (this->weapon == NULL)
    {
        std::cout << this->getName() << ": doesnt have a weapon" << std::endl;
    }
    else
        std::cout << this->getName() << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB(std::string s):name(s), weapon(NULL){}

HumanB::~HumanB(){}
