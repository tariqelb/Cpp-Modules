#include "cure.h"

cure::cure()
{
	std::cout << "Default cure constructor called" << std::endl;
}

cure::cure(std::string type)
{
	std::cout << "Overload cure constructor called" << std::endl;
	this->type = type;
}

cure::cure(const cure& rhs)
{
	std::cout << "Copy cure constructor called" << std::endl;
	this = &rhs;
}

cure&	cure::operatoe=(const cure& rhs)
{
	std::cout << "Copy assignment cure operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

cure::~cure()
{
	std::cout << "Default cure destructor called" << std::endl;
}

const std::string& cure::getType() const
{
	return (this->type);
}

cure*	cure::clone() const
{
	cure* cc = new cure();
	return (cc);
}

void	cure::use(ICharacter& target)
{
	std::cout << "Cure: \"* heals " << target << "\'s wounds *\"" << std::endl;
}
