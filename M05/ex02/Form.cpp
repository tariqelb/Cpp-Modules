/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:05:55 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 16:06:41 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Form.hpp"

Form::Form(std::string name, int signGrade, int executeGrade):name(name), sign(false), signGrade(signGrade), executeGrade(executeGrade)
{
	std::cout << "Overload Form constructor called" << std::endl;
	if (this->signGrade <= 0 || this->executeGrade <= 0)
	{
		throw(Form::GradeTooHighException());
	}
	else if (this->signGrade > 150 || this->executeGrade > 150)
	{
		throw(Form::GradeTooLowException());
	}
}

Form::Form(const Form& rhs):name(rhs.name), signGrade(rhs.signGrade), executeGrade(rhs.executeGrade)
{
	std::cout << "Copy Form constructor called" << std::endl;
	*this = rhs;
}

Form&	Form::operator=(const Form& rhs)
{
	std::cout << "Copy assignment Form operator called" << std::endl;
	if (this != &rhs)
	{
		this->sign = rhs.sign;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor of Form called" << std::endl;
}

Form::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Default GradeTooHighException constructor called" << std::endl;
	this->msg = "Exception : Grade too high";
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << "Destructor of GradeTooHighException called" << std::endl;
}

const char *	Form::GradeTooHighException::what() const throw()
{
	return (this->msg);
}

Form::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Default GradeTooLowException constructor called" << std::endl;
	this->msg = "Exception : Grade too low";
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << "Destructor of GradeTooLowException called" << std::endl;
}

const char *	Form::GradeTooLowException::what() const throw()
{
	return (this->msg);
}

const std::string	Form::getName(void) const
{
	return (this->name);
}

bool	Form::getSign(void) const
{
	return (this->sign);
}

int	Form::getSignGrade(void) const
{
	return (this->signGrade);
}

int	Form::getExecuteGrade(void) const
{
	return (this->executeGrade);
}

void	Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() <= this->getSignGrade())
		this->sign = true;
	else
		throw(Form::GradeTooLowException());
}

std::ostream&	operator<<(std::ostream& out, const Form& rhs)
{
	out << "Form ";
	out << rhs.getName();
	out << " has sign ";
	out << rhs.getSign();
	out << " has signGrade ";
	out << rhs.getSignGrade();
	out << " has ExecuteGarde ";
	out << rhs.getExecuteGrade();
	return (out);
}
