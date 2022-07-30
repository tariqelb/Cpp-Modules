#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		const std::string 	name;
		bool				sign;
		int					grade;
		const int			execGrade;

	public :
		const std::string	getName(void) const;
		bool				getSign(void) const;
		int					getGrade(void) const;
		int				getExecGrade(void) const;
		void				beSigned(Bureaucrat& b);
		void				executeForm(Bureaucrat& b) const;

	Form();
	Form(const std::string name, bool sign, int grade, const int execGrade);
	Form(const Form& rhs);
	Form&	operator=(const Form& rhs);
	~Form();

	class GradeTooHighException
	{
		private :
			const char*	msg;

		public	:
			const char *	what() const throw();

		GradeTooHighException();
		~GradeTooHighException() throw();
	};

	class GradeTooLowException : public std::exception
	{
		private :
			const char*	msg;

		public	:
			const char *	what() const throw();

		GradeTooLowException();
		~GradeTooLowException() throw();
	};
};

std::ostream&	operator<<(std::ostream& out, const Form& rhs);

#endif
