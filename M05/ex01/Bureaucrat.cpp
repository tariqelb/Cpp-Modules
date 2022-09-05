/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:10:40 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 15:39:51 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):name(name), grade(grade)
{
	std::cout << "Overload Bureaucrat constructor called" << std::endl;
	if (this->grade <= 0)
		throw(Bureaucrat::GradeTooHighException());
	else if (this->grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs):name(rhs.name)
{
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
	*this = rhs;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "Copy assignment Bureaucrat constructor called" << std::endl;
	if (this != &rhs)
	{
		this->grade = rhs.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor of Bureaucrat called" << std::endl;
}

const std::string&	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->getGrade() == 1)
		throw(Bureaucrat::GradeTooHighException());
	this->grade = this->getGrade() - 1;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->getGrade() == 150)
		throw(Bureaucrat::GradeTooLowException());
	this->grade = this->getGrade() + 1;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Default GradeTooHighException constructor called" << std::endl;
	this->msg = "Exception : Grade too high";
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << "Destructor of GradeTooHighException called" << std::endl;
}

const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return (this->msg);
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Default GradeTooLowException constructor called" << std::endl;
	this->msg = "Exception : Grade too low";
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << "Destructor of GradeTooLowException called" << std::endl;
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return (this->msg);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs)
{
	out <<  rhs.getName();
	out << ", Bureaucrat grade ";
	out << rhs.getGrade();
	out << ".";
	return (out);
}

void	Bureaucrat::signForm(Form& f)
{
	if (f.getSign())
	{
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " couldn't sign " << f.getName();
		std::cout << " because " << " his grade too low." << std::endl;
	}
}

