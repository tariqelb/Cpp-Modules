/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:19:15 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/16 18:13:48 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string zName):name(zName)
{}

Zombie::~Zombie()
{
    std::cout << this->name << ": is died" << std::endl;
}

std::string     Zombie::getName(void)
{
    return (this->name);
}

void    Zombie::setName(std::string s)
{
    this->name = s;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
