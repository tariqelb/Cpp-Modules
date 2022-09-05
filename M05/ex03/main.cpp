/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:39:09 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 17:43:01 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	try
	{
		rrf->beSigned(B0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	B0.executeForm(*rrf);
	if (rrf != NULL)
		delete rrf;
	if (rrf1 != NULL)
		delete rrf1;
	return (0);
}
