#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private :
		std::string	target;
		//PresidentialPardonForm();

	public :
		void			execute(Bureaucrat const & b) const;
		std::string		getTarget(void) const;

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& rhs);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);
	~PresidentialPardonForm();
};

#endif
