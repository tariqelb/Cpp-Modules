#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private :
		std::string	target;

	public :
		void			execute(Bureaucrat const & b) const;
		std::string		getTarget(void) const;

	PresidentialPardonForm(const std::string name, bool sign, int grade, const int execGrade, std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& rhs,const std::string name, bool sign, int grade, const int execGrade);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);
	~PresidentialPardonForm();
};

#endif
