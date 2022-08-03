#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include "Form.hpp"

class Intern  
{
	public :
		Form*	makeForm(const std::string& name, const std::string& target);
	
	Intern();
	Intern(const Intern& rhs);
	Intern&	operator=(const Intern& rhs);
	~Intern();
};

std::ofstream&	operator<<(std::ofstream& out, const Intern& rhs);

#endif
