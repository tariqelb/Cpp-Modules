/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:04:23 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/21 20:46:46 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "Overriding constructor of ScavTrap called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& rhs)
{
	std::cout << "Copy constructor of ScavTrap called" << std::endl;
	*this = rhs;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{	
	std::cout << "Copy assignment operator of ScavTrap called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.energyPoints;
		this->attackDamage = rhs.attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Distructor of ScavTrap called" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attack " << target << ", causing ";
		std::cout << this->attackDamage << " point of damage!" << std::endl;
		this->energyPoints = this->energyPoints - 1;
	}
}

