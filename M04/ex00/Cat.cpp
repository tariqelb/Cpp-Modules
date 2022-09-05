/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:13:23 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/31 13:16:46 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string type)
{
	std::cout << "Overload Cat constructor called" << std::endl;
	this->type = type;
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
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Make Cat Sound" << std::endl;
}

const std::string&	Cat::getType() const
{
	return (this->type);
}
