/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:14:25 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/31 13:19:21 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "Overload WrongCat constructor called" << std::endl;
	this->type = type;
}

WrongCat::WrongCat(const WrongCat& rhs)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = rhs;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "Copy assignment WrongCat operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Make WrongCat sound" << std::endl;
}

const std::string	WrongCat::getType(void) const
{
	return (this->type);
}
