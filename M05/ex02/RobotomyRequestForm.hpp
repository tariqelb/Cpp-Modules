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
		std::string		getTarget(void) const;

	RobotomyRequestForm(const std::string name, bool sign, int grade, const int execGrade, std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& rhs,const std::string name, bool sign, int grade, const int execGrade);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);
	~RobotomyRequestForm();
};

#endif
