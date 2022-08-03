#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern  someRandomIntern;
	Intern  someRandomIntern1;
	Bureaucrat B0("Genie", 4);
	Form*   rrf;
	Form*   rrf1;
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf1 = someRandomIntern1.makeForm("hello bay", "leme");
	rrf->beSigned(B0);
	B0.executeForm(*rrf);
	if (rrf != NULL)
		delete rrf;
	if (rrf1 != NULL)
		delete rrf1;
	return (0);
}
