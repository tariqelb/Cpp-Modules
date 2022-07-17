#include "fixed.hpp"

int	Fixed::toInt(void) const
{
	return (Fixed::getRawBits());
}

float	Fixed::toFloat() const
{
	return (Fixed::getRawBits());
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	fixedPoint = raw;
}

Fixed::Fixed()
{
	std::cout << "Default construtor called\n";
	fixedPoint = 0;
}

Fixed::Fixed(Fixed& rhs)
{
	std::cout << "Copy constructor called\n";
	this->fixedPoint = rhs.getRawBits();;
	//this->fixedPoint = rhs.fixedPoint;
}

Fixed& Fixed::operator=(Fixed& rhs)
{
	std::cout << "Copy assignment constructor called\n";
	if (this != &rhs)
		this->fixedPoint = rhs.getRawBits();
	return (rhs);
}

Fixed::~Fixed()
{
	std::cout << "Distructor is called\n";
}

Fixed::Fixed(int const fp)
{
	fixedPoint = fp;	
}
