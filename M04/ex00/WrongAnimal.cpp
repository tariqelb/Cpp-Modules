#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Overload WrongAnimal constructor called";
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "Copy assignment WrongAnimal operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal called" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Make WrongAnimal sound" << std::endl;
}

const std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}
