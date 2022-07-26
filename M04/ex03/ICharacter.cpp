#include <iostream>
#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "Default ICharacter constructor called" << std::endl;
}

ICharacter::ICharacter(std::string name)
{
	std::cout << "Overload ICharacter constructor called" << std::endl;
	this->name = name;
}

ICharacter::ICharacter(const Character& rhs)
{
	std::cout << "Copy ICharacter constructor called" << std::endl;
	*this = rhs;
}

ICharacter&	ICharacter::operator=(const Character& rhs)
{
	std::cout << "Copy assignment ICharacter operator called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
	}
	return (*this);
}

ICharacter::~ICharacter()
{
	std::cout << "Destructor of ICharacter called" << std::endl;
}
