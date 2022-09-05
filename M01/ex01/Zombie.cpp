/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:37:01 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/16 18:40:17 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getName(void)
{
    return (this->name);
}

void	Zombie::setName(std::string zName)
{
    this->name = zName;
}

Zombie::Zombie(){}

Zombie::Zombie(std::string zName):name(zName)
{}

Zombie::~Zombie()
{
	std::cout << "destructor of Zombie called" << std::endl;
}
