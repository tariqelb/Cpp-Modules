/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:00:28 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 18:42:02 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		std::cout << "------------------------------------------" << std::endl;
		Form f("F0", 6, 20);
		std::cout << "------------------------------------------" << std::endl;
		Bureaucrat b("B0", 6);
		std::cout << "------------------------------------------" << std::endl;
		try
		{
			f.beSigned(b);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "------------------------------------------" << std::endl;
		b.signForm(f);
		std::cout << "------------------------------------------" << std::endl;
		std::cout << f << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl; 
	}
	return (0);
}
