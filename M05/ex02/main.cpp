#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Form*	Sh = NULL;
	Sh = new ShrubberyCreationForm("Fommila");
	Form* Ro = new RobotomyRequestForm("Roboto");
	Form* Pr = new PresidentialPardonForm("Presidential");
	std::cout << "1--------------------------------" << std::endl;
	Bureaucrat B0("low", 2);
	Bureaucrat B1("katakori", 3);
	Bureaucrat B2("katakori", 134);
	std::cout << "2iii--------------------------------" << std::endl;
	std::cout << Sh->getTarget() << std::endl;
	std::cout << Sh->getName() << std::endl;
	std::cout << "3--------------------------------" << std::endl;
	Sh->beSigned(B0);
	std::cout << "4--------------------------------" << std::endl;
	Sh->execute(B0);
	std::cout << "5--------------------------------" << std::endl;
	Ro->beSigned(B1);
	std::cout << "6--------------------------------" << std::endl;
	Pr->beSigned(B2);
	std::cout << "7--------------------------------" << std::endl;
	B2.executeForm(*Ro);
	std::cout << "8--------------------------------" << std::endl;
	B0.executeForm(*Sh);
	std::cout << "9--------------------------------" << std::endl;
	B1.executeForm(*Pr);
	std::cout << "10--------------------------------" << std::endl;
	delete Sh;
	delete Ro;
	delete Pr;
/*	
	Form f0("B0_form", false, B0.getGrade(), 1);
	Form f1("B1_form", false, B1.getGrade(), 1);
	std::cout << "11--------------------------------" << std::endl;
	

	B0.incrementGrade();
	B1.decrementGrade();
	std::cout << "12--------------------------------" << std::endl;
	
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
