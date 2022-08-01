#include "ShrubberyCreationForm.hpp"
/*
ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}*/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, bool sign, int grade, const int execGrade, std::string target):Form(name, sign, grade, execGrade)
{
	std::cout << "Overload ShrubberyCreationForm constructor called" << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs,const std::string name, bool sign, int grade, const int execGrade ):Form(name, sign, grade, execGrade)
{
	std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
	*this = rhs;
}

//ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs, const std::string name, bool sign, int grade, const int execGrade):Form(name, sign, grade, execGrade)
ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	std::cout << "Copy assignment ShrubberyCreationForm operator called" << std::endl;
	if (this != &rhs)
	{
		this->target = rhs.target;
	}
	return (*this);
}
/*
void	ShrubberyCreationForm::executeForm(Bureaucrat& b) const;
{
	stdd::cout "execute " << b.getName() << " Form" << std::endl;
}*/

void	ShrubberyCreationForm::execute(Bureaucrat const & b) const
{
	try
	{
		if (this->getSign())
		{
			if (/*b.getExecGrade() <= this->getExecGrade() &&*/ b.getGrade() <= this->getGrade())
			{
				std::cout << this->getName() << " execute the ";
				std::cout  << b.getName() << " Bureaucrat" << std::endl;
			}
			else
				throw(ShrubberyCreationForm::GradeTooLowException());
		}
		else
			throw(ShrubberyCreationForm::GradeTooLowException());
	}
	catch (ShrubberyCreationForm::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}
