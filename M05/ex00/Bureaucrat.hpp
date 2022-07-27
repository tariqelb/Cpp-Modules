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
		int&				getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		
	static std::string GradeTooHighException;
	static std::string GradeTooLowException;
	
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& rhs);
	Bureaucrat& operator=(const Bureaucrat& rhs);
	~Bureaucrat();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs);

#endif
