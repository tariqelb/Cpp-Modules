#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private :
		const std::string	name;
		int					grade;

	public :
		const std::string&	getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& rhs);
	Bureaucrat& operator=(const Bureaucrat& rhs);
	~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
		private :
			const char *	msg;

		public :
			const char *	what() const throw();
		
		GradeTooHighException();
		~GradeTooHighException() throw();
	};

	class GradeTooLowException : public std::exception
	{
		private :
			const char *	msg;

		public :
			const char *	what() const throw();
		
		GradeTooLowException();
		~GradeTooLowException() throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs);

#endif
