#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "Default IMateriaSource constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource& rhs)
{
	std::cout << "copy IMateriaSource constructor called" << std::endl;

}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& rhs)
{
	std::cout << "copy assignment IMateriaSource operator called" << std::endl;
	return (this);
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "destructor of IMateriaSource called" << std::endl;
}
