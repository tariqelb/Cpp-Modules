#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(std::string type)
{
	std::cout << "Overload Cure constructor called" << std::endl;
	this->type = type;
}

Cure::Cure(const Cure& rhs)
{
	std::cout << "Copy Cure constructor called" << std::endl;
	*this = rhs;
}

Cure&	Cure::operator=(const Cure& rhs)
{
	std::cout << "Copy assignment Cure operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Default Cure destructor called" << std::endl;
}

const std::string& Cure::getType() const
{
	return (this->type);
}

Cure*	Cure::clone() const
{
	Cure* cc = new Cure();
	return (cc);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "Cure: \"* heals " << "target" << "\'s wounds *\"" << std::endl;
}
