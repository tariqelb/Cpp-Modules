#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string name, bool sign, int grade, const int execGrade, std::string target):Form(name, sign, grade, execGrade)
{
	std::cout << "Overload PresidentialPardonForm constructor called" << std::endl;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs,const std::string name, bool sign, int grade, const int execGrade ):Form(name, sign, grade, execGrade)
{
	std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
	*this = rhs;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	std::cout << "Copy assignment PresidentialPardonForm operator called" << std::endl;
	if (this != &rhs)
	{
		this->target = rhs.target;
	}
	return (*this);
}
/*
void	PresidentialPardonForm::executeForm(Bureaucrat& b) const
{
	std::cout << "execute " << b.getName() << " Form" << std::endl;
}*/

void	PresidentialPardonForm::execute(Bureaucrat const & b) const
{
	try
	{
		if (this->getSign())
		{
			if (b.getGrade() <= this->getExecGrade() && b.getGrade() <= this->getGrade())
			{
				std::cout << this->getName() << " execute the ";
				std::cout  << b.getName() << " Bureaucrat" << std::endl;
			}
			else
				throw(PresidentialPardonForm::GradeTooLowException());
		}
		else
			throw(PresidentialPardonForm::GradeTooLowException());
	}
	catch (PresidentialPardonForm::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor of PresidentialPardonForm called" << std::endl;
}
