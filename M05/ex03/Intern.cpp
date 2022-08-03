#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern(const Intern& rhs)
{
	std::cout << "Copy Intern constructor called" << std::endl;
	*this = rhs;
}

Intern&	Intern::operator=(const Intern& rhs)
{
	std::cout << "Copy assinment Intern  constructor called" << std::endl;
	(void)rhs;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor of Intern called" << std::endl;
}

int	Sweetcher(std::string name)
{
	int		index;	
	std::string	theForm[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	index = 0;
	while (index < 3)
	{
		if (theForm[index] == name)
			return (index);
		index++;
	}
	return (-1);
}

Form*	Intern::makeForm(const std::string& name, const std::string& target)
{
	Form*		rhs;
	int		index;
	
	rhs = NULL;
	index = Sweetcher(name);
	try
	{
		index = Sweetcher(name);
		switch (index)
		{
			case 0 :
			{
				rhs = new ShrubberyCreationForm(target);
				std::cout << "Intern creates " << name << std::endl;
				break;
			}
			case 1 :
			{
				rhs = new RobotomyRequestForm(target);
				std::cout << "Intern creates " << name << std::endl;
				break;
			}
			case 2 :
			{
				rhs = new PresidentialPardonForm(target);
				std::cout << "Intern creates " << name << std::endl;
				break;
			}
			default :
			{
				throw("Invalide Form Name");
				break;
			}
		}		
	}
	catch (char const * e)
	{
		std::cerr << e << std::endl;
	}
	return (rhs);
}

std::ofstream&	operator<<(std::ofstream& out, const Intern& rhs)
{
	(void)rhs;
	out << "Intern" << std::endl;
	return (out);
}
