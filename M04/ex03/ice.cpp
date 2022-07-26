#include "Ice.h"

Ice::Ice()
{
	std::cout << "Default ice constructor called" << std::endl;
}

Ice::Ice(std::string type)
{
	std::cout << "Overload ice constructor called" << std::endl;
	this->type = type;
}

Ice::Ice(const Ice& rhs)
{
	std::cout << "Copy ice constructor called" << std::endl;
	this = &rhs;
}

Ice&	Ice::operatoe=(const Ice& rhs)
{
	std::cout << "Copy assignment ice operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Default ice destructor called" << std::endl;
}

const std::string& Ice::getType() const
{
	return (this->type);
}

Ice*	Ice::clone() const
{
	Ice* cc = new Ice();
	return (cc);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "Ice: \"* shoots an ice bolt at " << target << " *\"" << std::endl;
}
