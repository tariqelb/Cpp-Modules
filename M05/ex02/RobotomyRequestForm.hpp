#ifndef ROBOTOMYREQUESTFORM_HPP
# define  ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private :
		std::string	target;

	public :
		void			execute(Bureaucrat const & b) const;

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& rhs);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);
	~RobotomyRequestForm();
};

#endif
