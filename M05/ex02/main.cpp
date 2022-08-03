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
	

	return (0);
}
