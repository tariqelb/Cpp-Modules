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
				std::ofstream ofile;

				name = this->getTarget() + "_shrubbery";
				ofile.open(name, std::ios::trunc | std::ios::out);
				if (!ofile.is_open())
				{
					std::cerr << "File doesn't open" << std::endl;
					ofile.close();
				}
				ft_draw_tree(ofile);
				ofile.close();
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

void	ft_draw_tree(std::ofstream& ofile)
{
	ofile << "      /\\ " << std::endl;
	ofile << "     //\\\\ " << std::endl;
	ofile << "    ///\\\\\\" << std::endl;
	ofile << "   ////\\\\\\\\" << std::endl;
	ofile << "  ////||\\\\\\\\" << std::endl;
	ofile << "      ||" << std::endl;
	ofile << "      ||" << std::endl;
	ofile << "      ||" << std::endl;
	ofile << "      ||" << std::endl;
	ofile << "   - -- -- -" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor of ShrubberyCreationForm called" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}
