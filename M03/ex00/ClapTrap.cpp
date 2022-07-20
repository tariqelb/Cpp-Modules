#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructot called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name)
{
	std::cout << "Overload constructor called" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target;
	std::cout << ", causing " << this->hitPoints << " points of damage!" << std::endl;
	this->energyPoints = this->energyPoints - 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << "Attack takes " << amount;
	std::cout << " demage points from " << this->name << "." <<  std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name <<  " repaired him self";
	std::cout << " with amount of " << amount << " points." << std::endl;
	this->energyPoints = this->energyPoints - 1;
}