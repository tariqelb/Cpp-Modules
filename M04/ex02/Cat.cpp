/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:04:01 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 20:11:30 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
	this->br = new Brain();
}

Cat::Cat(std::string type)
{
	std::cout << "Overload Cat constructor called" << std::endl;
	this->type = type;
	this->br = new Brain();
}

Cat::Cat(const Cat& rhs)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = rhs;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Copy assignment Cat operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->br = new Brain();
		*this->br = *rhs.getBrain();
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat called" << std::endl;
	delete this->br;
}

void	Cat::makeSound(void) const
{
	std::cout << "Make Cat Sound" << std::endl;
}

const std::string&	Cat::getType() const
{
	return (this->type);
}

Brain*	Cat::getBrain() const
{
	return (this->br);
}
