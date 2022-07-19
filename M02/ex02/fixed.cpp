#include "fixed.hpp"

// class member functions ----------------------------------

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

//----------------------------------------------------------

// orthodox canonical class form --------------------------------------

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

Fixed::~Fixed()
{
	std::cout << "Distructor called\n";
}

//-------------------------------------------------------------------------

// ostream function ------------------------------------------------

std::ostream &operator<<(std::ostream& outStream, const Fixed& fixed)
{
	outStream << fixed.toFloat();
	return (outStream);
}

//------------------------------------------------------------------

// overload operator members ------------------------------------------------------------------

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

//------------------------------------------------------------------------------------------

// overload arithmetic functions -----------------------------------------------------------

Fixed	Fixed::operator*(const Fixed& rhs)
{
	std::cout << "arithmetic '*' operator\n";
	Fixed	temp(this->toFloat() * rhs.toFloat());	
	return (temp);
}

Fixed	Fixed::operator/(const Fixed& rhs)
{
	std::cout << "arithmetic '/' operator\n";
	if (rhs.toFloat() == 0)
	{
		Fixed temp(0);
		std::cout << "Error division by zero\n";
		return (temp);
	}
	else
	{
		Fixed	temp(this->toFloat() / rhs.toFloat());
		return (temp);
	}
}

Fixed	Fixed::operator+(const Fixed& rhs)
{
	std::cout << "arithmetic '+' operator\n";
	Fixed	temp(this->toFloat() + rhs.toFloat());	
	return (temp);
}

Fixed	Fixed::operator-(const Fixed& rhs)
{
	std::cout << "arithmetic '-' operator\n";
	Fixed	temp(this->toFloat() - rhs.toFloat());	
	return (temp);
}

//-----------------------------------------------------------------------------------------

// comparision operators ----------------------------------------------------------------

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

//-------------------------------------------------------------------------------------------------


// min max static member functions------------------------------------------------------------------


const Fixed& Fixed::constMin(const Fixed& rhs, const Fixed& lhs)
{
	if (rhs.toFloat() < lhs.toFloat())
		return (rhs);
	else
		return (lhs);
}
	
Fixed& Fixed::Min(Fixed& rhs, Fixed& lhs)
{
	if (rhs.toFloat() < lhs.toFloat())
		return (rhs);
	else
		return (lhs);
}

const Fixed& Fixed::constMax(const Fixed& rhs, const Fixed& lhs)
{
	if (rhs.toFloat() > lhs.toFloat())
		return (rhs);
	else
		return (lhs);
}

Fixed& Fixed::Max(Fixed& rhs, Fixed& lhs)
{
	if (rhs.toFloat() > lhs.toFloat())
		return (rhs);
	else
		return (lhs);
}


// ----------------------------------------------------------------------------------------------------
