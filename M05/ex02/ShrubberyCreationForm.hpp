#ifndef SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private :
		std::string	target;
		//ShrubberyCreationForm(void);

	public :
		void			execute(Bureaucrat const & b) const;
		std::string		getTarget(void) const;

	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& rhs);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);
	~ShrubberyCreationForm();
};

#endif
