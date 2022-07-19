#include "fixed.hpp"

int	Fixed::toInt(void) const
{
	return ((int) (fixedPoint >> fractalBit));
}

float	Fixed::toFloat() const
{
	return ((float) fixedPoint / (float)(1 << fractalBit));
}

int	Fixed::getRawBits(void) const
{
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}

Fixed::Fixed()
{
	std::cout << "Default construtor called\n";
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed& rhs)
{
	std::cout << "Copy constructor called\n";
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment constructor called\n";
	if (this != &rhs)
		this->fixedPoint = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Distructor called\n";
}

Fixed::Fixed(int const fp)
{
	std::cout << "Int constructor called\n";
	fixedPoint = fp << fractalBit;
}

Fixed::Fixed(float const fp)
{
	std::cout << "Float constructor called\n";
	fixedPoint = (int) (roundf(fp * (1 << fractalBit)));
}

std::ostream &operator<<(std::ostream& outStream, const Fixed& fixed)
{
	outStream << fixed.toFloat();
	return (outStream);
}
