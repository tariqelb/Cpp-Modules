#include "Form.hpp"
#include <iostream>


Form::Form(const std::string name, bool sign, int grade, int execgrade):name(name), sign(sign), grade(grade), execGrade(execgrade)
{
	std::cout << "Overload Form constructor called" << std::endl;
	try
	{
		if (this->getGrade() <= 0)
			throw(Form::GradeTooHighException());
		else if (this->getGrade() > 150)
			throw(Form::GradeTooLowException());
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form(const Form& rhs):name(rhs.name), sign(rhs.sign), grade(rhs.grade), execGrade(rhs.execGrade)
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
		this->grade = rhs.grade;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor of form called" << std::endl;
}

Form::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Default GradeTooHighException constructor called" << std::endl;
	this->msg = "Exception : Grade Too High";
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
	this->msg = "Exception : Grade Too Low";
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

int	Form::getGrade(void) const
{
	return (this->grade);
}

int	Form::getExecGrade(void) const
{
	return (this->execGrade);
}

void	Form::beSigned(Bureaucrat& b)
{	
	try
	{
		if (b.getGrade() <= this->getGrade())
			this->sign = true;
		else
			throw(Form::GradeTooLowException());
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& out, Form& rhs)
{
	out << rhs.getName() << " ";
	out << rhs.getSign() << " ";
	out << rhs.getGrade() << " ";
	out << rhs.getExecGrade();
	return (out);
}
