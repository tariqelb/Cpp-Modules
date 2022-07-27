#include <iostream>
#include "Bureaucrat.hpp"

std::string GradeTooHighException = "Grade Too High Exception";
std::string GradeTooLowException =  "Grade Too Low Exception";

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
		this->name = name;
		this->grade = grade;
	}
	return (*this);
}

Bureaucrat:Bureaucrat()
{
	std::cout << "Destructor of Bureaucrat called" << std::endl;
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

const int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade(void)
{
	try
	{
		if (this->getGrade() == 1)
			throw(this->GradeTooHighException);
		this->grade = this->getGrade() - 1;
	}
	catch (std::exception & e)
	{
		std::cout << e << std::endl;
	}
}

void	Bureaucrat::decrementGrade(void)
{
	try
	{
		if (this->getGrade() == 150)
			throw(this->GradeTooLowException);
		this->grade = this->getGrade() + 1;
	}
	catch(std::exception & e)
	{
		std::cout << GradeTooLowException << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs)
{
	out << rhs.getName();
	out << "  ";
	out << rhs.getGrade();
	out << std::endl;
	return (out);
}
