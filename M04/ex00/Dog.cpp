/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:13:39 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 11:22:45 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string type)
{
	std::cout << "Overload Dog constructor called" << std::endl;
	this->type = type;
}

Dog::Dog(const Dog& rhs)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = rhs; 
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Copy assignment Dog operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Make Dog Sound" << std::endl;
}

const std::string&	Dog::getType() const
{
	return (type);
}
