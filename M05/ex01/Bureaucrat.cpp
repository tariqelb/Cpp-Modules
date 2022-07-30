#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade):name(name), grade(grade)
{
	std::cout << "Overload Bureaucrat constructor called" << std::endl;
	try
	{
		if (this->getGrade() <= 0)
			throw(Bureaucrat::GradeTooHighException());
		else if (this->getGrade() > 150)
			throw(Bureaucrat::GradeTooLowException());
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
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
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
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
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Default GradeTooHighException constructor called" << std::endl;
	this->msg = "Exception : Grade Too High";
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << "destructor of GradeTooHighException called" << std::endl;
}

const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return (this->msg);
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Default GradeTooLowException constructor called" << std::endl;
	this->msg = "Exception : Grade Too Low";
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
		std::cout << " because " << " Grade too low" << std::endl;
	}
}

