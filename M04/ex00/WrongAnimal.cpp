/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:14:34 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/31 13:19:42 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Overload WrongAnimal constructor called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "Copy assignment WrongAnimal operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal called" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Make WrongAnimal sound" << std::endl;
}

const std::string&	WrongAnimal::getType(void) const
{
	return (type);
}
