/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:17:27 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 18:49:41 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Form*	Sh = new ShrubberyCreationForm("Fommila");
	Form* Ro = new RobotomyRequestForm("Roboto");
	Form* Pr = new PresidentialPardonForm("Presidential");
	std::cout << "1--------------------------------" << std::endl;
	Bureaucrat B0("low", 2);
	Bureaucrat B1("loofy", 3);
	Bureaucrat B2("katakori", 137);
	std::cout << "2iii--------------------------------" << std::endl;
	std::cout << Sh->getTarget() << std::endl;
	std::cout << Sh->getName() << std::endl;
	std::cout << "3--------------------------------" << std::endl;
	try
	{
		Sh->beSigned(B0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "4--------------------------------" << std::endl;
	Sh->execute(B0);
	std::cout << "5--------------------------------" << std::endl;
	try
	{
		Ro->beSigned(B1);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Ro->execute(B1);
	std::cout << "6--------------------------------" << std::endl;
	try
	{
		Pr->beSigned(B2);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Pr->execute(B2);
	std::cout << Pr->getSign() << std::endl;
	std::cout << "7--------------------------------" << std::endl;
	B0.executeForm(*Ro);
	std::cout << "8--------------------------------" << std::endl;
	B1.executeForm(*Sh);
	std::cout << "9--------------------------------" << std::endl;
	B1.executeForm(*Pr);
	std::cout << "10--------------------------------" << std::endl;
	delete Sh;
	delete Ro;
	delete Pr;
	

	return (0);
}
