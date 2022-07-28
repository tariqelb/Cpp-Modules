#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& rhs)
{
	std::cout << "Copy Animal constructor called";
	*this = rhs;
}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "Copy assignment Animal operator called";
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal called" << std::endl;
}