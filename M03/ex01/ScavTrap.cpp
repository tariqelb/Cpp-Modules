#include "ScavTrap.hpp"

void	ScavTrap::guardGate(void)
{
	std::cout << "guardGate function called" << std::endl;
}

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "Overriding constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs)
{
	std::cout << "Copy constructor of ScavTrap called" << std::endl;
	*this = rhs;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{	
	std::cout << "Copy assignment operator of ScavTrap called" << std::endl;
	/*if (this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.energyPoints;
		this->attackDamage = rhs.attackDamage;
	}*/
	ClapTrap::operator=(rhs);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Distructor of ScavTrap called" << std::endl;
	//ClapTrap::~ClapTrap();
}
