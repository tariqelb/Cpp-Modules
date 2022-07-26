#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default AMateria constructor called" << std::cout;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "Overload AMateria constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria& rhs)
{
	std::cout << "Copy AMateria constructor called" << std::endl;
	*this = rhs;
}

AMateria&	AMateria::operator=(const AMateria& rhs)
{
	std::cout << "Copy assignment AMateria construtor called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "Destructor of AMateria called" << std::endl;
}

const std::string&	AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	//std::cout << target.getName() << "ICharacter send message" << std::endl;
}
