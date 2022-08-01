#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Form*	Sh = new ShrubberyCreationForm("Fzero", false, 137, 147, "Fommila");
	std::cout << "1--------------------------------" << std::endl;
	Bureaucrat B0("low", 2);
	Bureaucrat B1("katakori", 3);
	std::cout << "2--------------------------------" << std::endl;
	Sh->getName();
	std::cout << "3--------------------------------" << std::endl;
	delete Sh;
/*	
	Form f0("B0_form", false, B0.getGrade(), 1);
	Form f1("B1_form", false, B1.getGrade(), 1);
	std::cout << "2--------------------------------" << std::endl;
	

	B0.incrementGrade();
	B1.decrementGrade();
	std::cout << "3--------------------------------" << std::endl;
	
	std::cout << B0 << std::endl;
	std::cout << B1 << std::endl;
	std::cout << "4--------------------------------" << std::endl;

	B0.incrementGrade();
	std::cout << "5--------------------------------" << std::endl;
	f0.beSigned(B0);
	f1.beSigned(B1);
	std::cout << "6--------------------------------" << std::endl;
	B0.signForm(f0);	
	B1.signForm(f1);	
	std::cout << "7--------------------------------" << std::endl;
	f0.executeForm(B0);	
	f1.executeForm(B1);	
	std::cout << "7--------------------------------" << std::endl;
	std::cout << "Programe is continues running" << std::endl;
*/	
	return (0);
}
