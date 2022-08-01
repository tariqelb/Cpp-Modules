#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreationForm", false, 145, 137)
{
	std::cout << "Overload ShrubberyCreationForm constructor called" << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs):Form("ShrubberyCreationForm", false, 145, 137)
{
	std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
	*this = rhs;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	std::cout << "Copy assignment ShrubberyCreationForm operator called" << std::endl;
	if (this != &rhs)
	{
		this->target = rhs.target;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & b) const
{
	try
	{
		if (this->getSign())
		{
			if ( b.getGrade() <= this->getGrade())
			{
				std::string	name;
				name = this.getTarget() + "_shrubbery";
				std::ofstream tree;
				tree.open(name, std::ios::trunc | std::ios::out);
				if (!tree.isopen())
				{
					std::err << "File doesn't open" << std::endl;
					tree.close();
				}
				//drow the tree;
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

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor of ShrubberyCreationForm called" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}
