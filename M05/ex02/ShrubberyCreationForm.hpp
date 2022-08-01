#ifndef SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private :
		std::string	target;
	public :
		void			execute(Bureaucrat const & b) const;
	
	//ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string name, bool sign, int grade, const int execGrade, std::string target);
	//ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& rhs,const std::string name, bool sign, int grade, const int execGrade);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);
	~ShrubberyCreationForm();
};

#endif
