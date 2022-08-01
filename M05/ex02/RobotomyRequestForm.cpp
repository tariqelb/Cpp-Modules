#include "RobotomyRequestForm.hpp"

RobotomyRequestForm()
{
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm(std::string target):target(target)
{
	std::cout << "Overload RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs)
{
	std::cout << "Copy RobotomyRequestForm constructor called" << stdd::endl;
	*thus = rhs;
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

void	RobotomyRequestForm::executeForm(Bureaucrat& b) const;
{
	stdd::cout "execute " << b.getName() << " Form" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & b) const
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
				throw(RobotomyRequestForm::GradeTooLowException());
		}
		else
			throw(RobotomyRequestForm::GradeTooLowException())
	}
	catch (RobotomyRequestForm::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}
