#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade):name(name), grade(grade)
{
	std::cout << "Overload Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs)
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
	try
	{
		if (this->getGrade() == 1)
			throw(Bureaucrat::GradeTooHighException());
		this->grade = this->getGrade() - 1;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.getMessage() << std::endl;
	}
}

void	Bureaucrat::decrementGrade(void)
{
	try
	{
		if (this->getGrade() == 150)
			throw(Bureaucrat::GradeTooLowException());
		this->grade = this->getGrade() + 1;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.getMessage() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Default GradeTooHighException constructor called" << std::endl;
	this->msg = "Grade Too High Exception";
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << "destructor of GradeTooHighException called" << std::endl;
}

std::string Bureaucrat::GradeTooHighException::getMessage(void) const
{
	return (this->msg);
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Default GradeTooLowException constructor called" << std::endl;
	this->msg = "Grade Too Low Exception";
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << "destructor of GradeTooLowException called" << std::endl;
}

std::string Bureaucrat::GradeTooLowException::getMessage(void) const
{
	return (this->msg);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs)
{
	out <<  rhs.getName();
	out << ", Bureaucrat grade ";
	out << rhs.getGrade();
	return (out);
}
