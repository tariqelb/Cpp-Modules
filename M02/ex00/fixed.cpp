/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:49:59 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/19 20:07:56 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	const Fixed::fractalBit = 8 ;

Fixed::Fixed()
{
	std::cout << "Default construtor called" << std::endl;
	fixedPoint = 0;
}

Fixed::Fixed(Fixed& rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed& Fixed::operator=(Fixed& rhs)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &rhs)
		this->fixedPoint = rhs.getRawBits();
	return (rhs);
}

Fixed::~Fixed()
{
	std::cout << "Distructor is called" << std::endl;
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

