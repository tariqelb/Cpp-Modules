/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:42:18 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 17:13:21 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm", 72, 45)
{
	std::cout << "Overload PresidentialPardonForm constructor called" << std::endl;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs):Form("PresidentialPardonForm", 72, 45)
{
	std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
	*this = rhs;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	std::cout << "Copy assignment PresidentialPardonForm operator called" << std::endl;
	if (this != &rhs)
	{
		this->target = rhs.target;
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & b) const
{
	try
	{
		if (this->getSign())
		{
			if (b.getGrade() <= this->getExecuteGrade())
			{
				std::cout << this->getTarget() ;
				std::cout  << " has been pardoned by Zaphod Beeblebrox."<< std::endl;
			}
			else
				throw(PresidentialPardonForm::GradeTooLowException());
		}
		else
			throw(PresidentialPardonForm::GradeTooLowException());
	}
	catch (PresidentialPardonForm::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor of PresidentialPardonForm called" << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}
