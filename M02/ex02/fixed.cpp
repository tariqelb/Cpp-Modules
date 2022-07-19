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

bool	Fixed::operator==(const Fixed& rhs) const
{
	std::cout << "overload comparing operator '==' \n";
	if (this == &rhs)
		return (true);
	if (this->fixedPoint == rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed& rhs) const
{
	std::cout << "overload not equal operator\n";
	if (this == &rhs)
		return (false);
	if (this->fixedPoint == rhs.fixedPoint)
		return (false);
	else
		return (true);
}

bool	Fixed::operator>(const Fixed& rhs) const
{
	std::cout << "overload great than operator '>'\n";
	if (this->fixedPoint > rhs.fixedPoint)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed& rhs) const
{
	std::cout << "overload less than operator '<'\n";
	if (this->fixedPoint < rhs.fixedPoint)
		return (true);
	else
		return (false);
}


bool	Fixed::operator>=(const Fixed& rhs) const
{
	std::cout << "overload great than or equal operator '>='\n";
	if (this == &rhs)
		return (true);
	if (this->fixedPoint > rhs.fixedPoint)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed& rhs) const
{
	std::cout << "overload less than or equal operator '>='\n";	
	if (this == &rhs)
		return (true);
	if (this->fixedPoint < rhs.fixedPoint)
		return (true);
	else
		return (false);
}
/*
Fixed&	Fixed::operator*(const Fixed& rhs)
{
	std::cout << "arithmetic '*' operator\n";
	return this(this->fixedPoint * rhs.fixedPoint);
}
*/
Fixed&	Fixed::operator++()
{
	this->fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;

	++this->fixedPoint;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	--this->fixedPoint;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;

	--this->fixedPoint;
	return (temp);
}

