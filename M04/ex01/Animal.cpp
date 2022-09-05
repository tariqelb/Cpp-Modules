/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:39:25 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 20:26:54 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(std::string type)
{
	std::cout << "Overload Animal constructor is called" << std::endl;
	this->type = type; 
}

Animal::Animal(const Animal& rhs)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = rhs;
}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "Copy assignment Animal operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "There is no stundard Animal";
	std::cout << " sound, but you can imagine it" << std::endl;
}

const std::string&	Animal::getType() const
{
	return (type);
}
