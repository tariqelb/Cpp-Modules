/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:44:17 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 16:57:00 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm", 25, 5)
{
	std::cout << "Overload RobotomyRequestForm constructor called" << std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs):Form("RobotomyRequestForm", 25, 5)
{
	std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
	*this = rhs;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	std::cout << "Copy assignment RobotomyRequestForm operator called" << std::endl;
	if (this != &rhs)
	{
		this->target = rhs.target;
	}
	return (*this);
}


void	RobotomyRequestForm::execute(Bureaucrat const & b) const
{
	try
	{
		if (this->getSign())
		{
			if (b.getGrade() <= this->getExecuteGrade())
			{
				std::cout << "Stupied writer how can i make noise wthout a ";
				std::cout << "function that make sounds, buuh our life";
				std::cout << " go with peaple like that." << std::endl;
				srand(time(0));
				if ((rand() % 2) == 1)
				{
					std::cout << this->getTarget();
					std::cout << " has been robotomized successfully.";
					std::cout <<  std::endl;
				}
				else
				{	
					std::cout << this->getTarget();
					std::cout << " robotomy failed.";
					std::cout <<  std::endl;
				}

			}
			else
				throw(RobotomyRequestForm::GradeTooLowException());
		}
		else
			throw(RobotomyRequestForm::GradeTooLowException());
	}
	catch (RobotomyRequestForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor of RobotomyRequestForm called" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}
