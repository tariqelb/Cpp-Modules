#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include "Form.hpp"

class Intern  
{
	public :
		Form*	makeForm(std::string name, std::string target);
	
	Intern();
	Intern(const Intern& rhs);
	Intern&	operator=(const Intern& rhs);
	~Intern();
};

#endif
