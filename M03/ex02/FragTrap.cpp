/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:07:19 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/21 21:03:11 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap contructor called" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << "Overriding constructor of FragTrap called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& rhs)
{
	std::cout << "Copy constructor of FragTrap called" << std::endl;
	*this = rhs;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "Copy assignment operator of FragTrap called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.energyPoints;
		this->attackDamage = rhs.attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " High Fives Guys." << std::endl;
}
