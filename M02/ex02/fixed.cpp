/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:55:00 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/20 15:45:07 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fractalBit = 8;

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
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fixedPoint = raw;
}

//----------------------------------------------------------

// orthodox canonical class form --------------------------------------

Fixed::Fixed()
{
	std::cout << "Default construtor called" << std::endl;
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed& rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &rhs)
		this->fixedPoint = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed(int const fp)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = fp * (1 << fractalBit);
}

Fixed::Fixed(float const fp)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = (int) (roundf(fp * (1 << fractalBit)));
}

Fixed::~Fixed()
{
	std::cout << "Distructor called" << std::endl;
}

//-------------------------------------------------------------------------

// ostream function ------------------------------------------------

std::ostream&	operator<<(std::ostream& outStream, const Fixed& fixed)
{
	outStream << fixed.toFloat();
	return (outStream);
}

//------------------------------------------------------------------

// overload operator members ------------------------------------------------------------------

bool	Fixed::operator==(const Fixed& rhs) const
{
	if (this == &rhs)
		return (true);
	if (this->fixedPoint == rhs.fixedPoint)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed& rhs) const
{
	if (this == &rhs)
		return (false);
	if (this->fixedPoint == rhs.getRawBits())
		return (false);
	else
		return (true);
}

bool	Fixed::operator>(const Fixed& rhs) const
{
	if (this->fixedPoint > rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed& rhs) const
{
	if (this->fixedPoint < rhs.getRawBits())
		return (true);
	else
		return (false);
}


bool	Fixed::operator>=(const Fixed& rhs) const
{
	if (this == &rhs)
		return (true);
	if (this->fixedPoint >= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed& rhs) const
{
	if (this == &rhs)
		return (true);
	if (this->fixedPoint <= rhs.getRawBits())
		return (true);
	else
		return (false);
}

//------------------------------------------------------------------------------------------

// overload arithmetic functions -----------------------------------------------------------

Fixed	Fixed::operator*(const Fixed& rhs)
{
	Fixed	temp((this->fixedPoint * rhs.getRawBits()) / this->fractalBit);
	return (temp);
}

Fixed	Fixed::operator/(const Fixed& rhs)
{
	Fixed temp;
	
	if (rhs.fixedPoint == 0)
		std::cout << "Error division by zero" << std::endl;
	else
		temp.setRawBits((this->fixedPoint / rhs.getRawBits()) / this->fractalBit);
	return (temp);
}

Fixed	Fixed::operator+(const Fixed& rhs)
{
	Fixed temp(this->fixedPoint + rhs.getRawBits());
	return (temp);
}

Fixed	Fixed::operator-(const Fixed& rhs)
{
	Fixed	temp(this->fixedPoint - rhs.getRawBits());
	return (temp);
}

//-----------------------------------------------------------------------------------------

// de/increment operators ----------------------------------------------------------------

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
	if (rhs < lhs)
		return (rhs);
	else
		return (lhs);
}
	
Fixed& Fixed::Min(Fixed& rhs, Fixed& lhs)
{
	if (rhs < lhs)
		return (rhs);
	else
		return (lhs);
}

const Fixed& Fixed::constMax(const Fixed& rhs, const Fixed& lhs)
{
	if (rhs > lhs)
		return (rhs);
	else
		return (lhs);
}

Fixed& Fixed::Max(Fixed& rhs, Fixed& lhs)
{
	if (rhs > lhs)
		return (rhs);
	else
		return (lhs);
}


// ----------------------------------------------------------------------------------------------------
