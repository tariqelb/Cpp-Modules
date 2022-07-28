#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Bureaucrat constructor called" << std::cout;
}

Bureaucrat::Bureaucrat(std::string name, int grade):name(name), grade(grade)
{
	std::cout << "Overload Bureaucrat constructor called" << std::cout;
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs)
{
	std::cout << "Copy Bureaucrat constructor called" << std::cout;
	*this = rhs;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "Copy assignment Bureaucrat constructor called" << std::cout;
	if (this != &rhs)
	{
		//this->name = rhs.name;
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
			throw(this->gExp);
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
			throw(this->lExp);
		this->grade = this->getGrade() + 1;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.getMessage() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::Bureaucrat::GradeTooHighException()
{
	this->msg = "Grade Too High Exception" << std::cout;
}

Bureaucrat::GradeTooLowException::~Bureaucrat::GradeTooLowException()
{
	this->msg = "Grade Too Low Exception" << std::cout;
}

std::string Bureaucrat::GradeTooLowException::getMessage(void) const
{
	return (this->msg);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs)
{
	out << rhs.getName();
	out << "  ";
	out << rhs.getGrade();
	out << std::endl;
	return (out);
}
