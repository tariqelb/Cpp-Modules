#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

Class Form
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
		const int			getExecGrade(void) const;
		void				beSigned(Bureaucrat& b);
		void				signForm(Form f);


	Form();
	Form(const std::string name, bool sign, int grade, const int execGrade);
	Form(const Form& rhs);
	Form&	operator=(const Form& rhs);
	~Form();

	class GradeToHighException
	{
		private ;
			std::string	msg;
		
		public	:
			std::string	getMessage() const;

		GradeToHighException();
		~GradeToHighException() throw();
	};

	class GradeToLowException : public std::exception
	{
		private ;
			std::string	msg;
		
		public	:
			std::string	getMessage() const;

		GradeToLowException();
		~GradeToLowException() throw();
	};
};

std::ostrem&	operator<<(std::ostream& out, const Form& rhs);

#endif
