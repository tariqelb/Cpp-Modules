#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string name, bool sign, int grade, const int execGrade, std::string target):Form(name, sign, grade, execGrade)
{
	std::cout << "Overload RobotomyRequestForm constructor called" << std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs,const std::string name, bool sign, int grade, const int execGrade ):Form(name, sign, grade, execGrade)
{
	std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
	*this = rhs;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	std::cout << "Copy assignment RobotomyRequestForm operator called" << std::endl;
	if (this != &rhs)
	{
		this->target = rhs.target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor of RobotomyRequestForm called" << std::endl;
}
/*
void	RobotomyRequestForm::execute(Bureaucrat const & b) const
{
	std::cout << "execute " << b.getName() << " Form" << std::endl;
}
*/
void	RobotomyRequestForm::execute(Bureaucrat const & b) const
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
				throw(RobotomyRequestForm::GradeTooLowException());
		}
		else
			throw(RobotomyRequestForm::GradeTooLowException());
	}
	catch (RobotomyRequestForm::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}
std::string	getTarget(void) const
{
	return (this->target);
}
