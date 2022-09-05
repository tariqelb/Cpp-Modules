/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:59:41 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/21 20:21:47 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructot called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name)
{
	std::cout << "Overload ClapTrap constructor called" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = rhs;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "Copy assignment ClapTrap operator called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.hitPoints;
		this->attackDamage = rhs.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attack " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints = this->energyPoints - 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " takes damage of " << amount;
		std::cout << " points." <<  std::endl;
		this->hitPoints = this->hitPoints - amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name <<  " repaired him self";
		std::cout << " with amount of " << amount << " points." << std::endl;
		this->hitPoints = this->hitPoints + amount;
		this->energyPoints = this->energyPoints - 1;
	}
}
