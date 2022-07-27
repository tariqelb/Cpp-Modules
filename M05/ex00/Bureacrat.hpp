#ifndef BUREAUCRAT.HPP
# define BUREAUCRAT.HPP

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

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& rhs);
	Bureaucrat operator=(const Bureaucrat& rhs);
	~Bureacrat();
};

std::ostream operator<<(std::ostream os, const Bureaucrat& rhs);

#endif
