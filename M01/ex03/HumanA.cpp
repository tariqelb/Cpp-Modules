/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:43:49 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/16 23:11:04 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

std::string    HumanA::getName(void)
{
    return (this->name);
}

void    HumanA::attack(void)
{    
    std::cout << this->getName() << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string s, Weapon& w):name(s),weapon(w)
{}
HumanA::~HumanA(){}
