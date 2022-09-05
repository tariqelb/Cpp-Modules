/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:29:46 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/20 13:58:35 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fractalBit = 8;

Fixed::Fixed()
{
	std::cout << "Default construtor called" << std::endl;
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed& rhs)
{
	std::cout << "Copy constructor called\n";
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &rhs)
		this->fixedPoint = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Distructor called" << std::endl;
}

Fixed::Fixed(int const fp)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = fp * ( 1 << fractalBit);
}

Fixed::Fixed(float const fp)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = (int) (roundf(fp * (1 << fractalBit)));
}

int	Fixed::toInt(void) const
{
	return ((int) (fixedPoint * (1 << fractalBit)));
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

std::ostream&operator<<(std::ostream& outStream, const Fixed& fixed)
{
	outStream << fixed.toFloat();
	return (outStream);
}
