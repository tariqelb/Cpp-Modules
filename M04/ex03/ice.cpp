#include "ice.h"

ice::ice()
{
	std::cout << "Default ice constructor called" << std::endl;
}

ice::ice(std::string type)
{
	std::cout << "Overload ice constructor called" << std::endl;
	this->type = type;
}

ice::ice(const ice& rhs)
{
	std::cout << "Copy ice constructor called" << std::endl;
	this = &rhs;
}

ice&	ice::operatoe=(const ice& rhs)
{
	std::cout << "Copy assignment ice operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

ice::~ice()
{
	std::cout << "Default ice destructor called" << std::endl;
}

const std::string& ice::getType() const
{
	return (this->type);
}

ice*	ice::clone() const
{
	ice* cc = new ice();
	return (cc);
}

void	ice::use(ICharacter& target)
{
	std::cout << "Ice: \"* shoots an ice bolt at " << target << " *\"" << std::endl;
}
