#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm", false, 25, 5)
{
	std::cout << "Overload RobotomyRequestForm constructor called" << std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs):Form("RobotomyRequestForm", false, 25, 5)
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


void	RobotomyRequestForm::execute(Bureaucrat const & b) const
{
	std::string err;
	
	err = this->getTarget() + ": The robotomy failed.";
	try
	{
		if (this->getSign())
		{
			if (b.getGrade() <= this->getGrade())
			{
				std::cout << "stupied writer how can i make noise wthout a ";
				std::cout << "function who make sound buuh this is our life";
				std::cout << " with peaple like that." << std::endl;
				std::cout << this->getTarget();
				std::cout << " has been robotomized successfully 50% of the time.";
				std::cout  <<  std::endl;
			}
			else
				throw(RobotomyRequestForm::GradeTooLowException());
		}
		else
			throw(RobotomyRequestForm::GradeTooLowException());
	}
	catch (RobotomyRequestForm::GradeTooLowException& e)
	{
		std::cerr << err << std::endl;
		std::cerr << e.what() << std::endl;
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor of RobotomyRequestForm called" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}
