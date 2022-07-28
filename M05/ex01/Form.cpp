#include "Form.hpp"
#include <iostream>

Form::Form()
{
	std::cout << "Default form constructor called" << std::endl;
}

Form::Form(const std::string name, bool sign, int grade, int execgrade):name(name), sign(sign), grade(grade), execGrade(execgrade)
{
	std::cout << "Overload Form constructor called" << std::endl;
}

Form::Form(const form& rhs)
{
	std::cout << "Copy Form constructor called" << std::endl;
	*this = rhs;
}
Form::Form()
{
	std::cout << "Copy assignment Form operator called" << std::endl;
	if (this != rhs)
	{
		this->sign = rhs.sign;
		this->grade = rhs.grade;
	}
	retrn (*this);
}

Form::~Form()
{
	std::cout << "Destructor of form called" << std::endl;
}

Form::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Default GradeTooHighException constructor called" << std::endl;
}

Form::GradeTooHighException::~GradeTooHighException()
{
	std::cout << "Destructor of GradeTooHighException called" << std::endl;
}

std::string	Form::GradeTooHighException::getMessage(void)
{
	return (this->msg);
}

Form::GradeToLowException::GradeToLowException()
{
	std::cout << "Default GradeTooLowException constructor called" << std::endl;
}

Form::GradeTooLowException::~GradeTooLowException()
{
	std::cout << "Destructor of GradeTooLowException called" << std::endl;
}

std::string	Form::GradeTooLowException::getMessage(void)
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

const int	form::getExecGrade(void) const
{
	return (this->execgGrade);
}

void	Form::beSigned(Bureaucrat& b)
{
	if ()
}

void	Form::signForm(Form f)
{
	if (f.getSign())
	{
		std::cout << "Bureaucrat" << " signed " << f.getName() << std::endl;
	}
	else
	{
		std::cout << "Bureaucrat" << " couldn't sign " << f.getName() << " because " << " reason " << std::endl;
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
