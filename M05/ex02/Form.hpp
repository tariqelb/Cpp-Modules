#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		const std::string 	name;
		bool			sign;
		int			grade;
		const int		execGrade;
		//Form(void);

	public :
		const std::string	getName(void) const;
		bool			getSign(void) const;
		int			getGrade(void) const;
		int			getExecGrade(void) const;
		void			beSigned(Bureaucrat& b);
		virtual void		execute(Bureaucrat const & b) const = 0;
		virtual std::string	getTarget(void) const = 0;
	
	Form(const std::string name, bool sign, int grade, const int execGrade);
	Form(const Form& rhs);
	Form&	operator=(const Form& rhs);
	virtual ~Form();

	class GradeTooHighException
	{
		private :
			const char*	msg;

		public	:
			virtual const char *	what() const throw();

		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
	};

	class GradeTooLowException : public std::exception
	{
		private :
			const char*	msg;

		public	:
			virtual const char *	what() const throw();

		GradeTooLowException();
		~GradeTooLowException() throw();
	};
};

std::ostream&	operator<<(std::ostream& out, const Form& rhs);

#endif
