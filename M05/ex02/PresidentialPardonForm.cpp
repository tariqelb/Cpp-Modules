#include "PresidentialPardonForm.hpp"
/*
PresidentialPardonForm()
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}*/

PresidentialPardonForm(std::string target):target(target)
{
	std::cout << "Overload PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs)
{
	std::cout << "Copy PresidentialPardonForm constructor called" << stdd::endl;
	*thus = rhs;
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

void	PresidentialPardonForm::executeForm(Bureaucrat& b) const;
{
	stdd::cout "execute " << b.getName() << " Form" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & b) const
{
	try
	{
		if (this->getSign())
		{
			if (b.getExecGradeGrade() <= this->getExecGrade() && b.getGrade <= this->getGrade())
			{
				std::cout << this->getName() << " execute the ";
				std::cout  << b.getName() << " Bureaucrat" << std::endl;
			}
			else
				throw(PresidentialPardonForm::GradeTooLowException());
		}
		else
			throw(PresidentialPardonForm::GradeTooLowException())
	}
	catch (PresidentialPardonForm::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}
