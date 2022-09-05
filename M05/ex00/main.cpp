/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:41:35 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/03 18:10:25 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try 
	{
		Bureaucrat B("ma", 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------------------" << std::endl;
	try 
	{
		Bureaucrat B0("mo", 1);
		std::cout << B0 << std::endl;
		std::cout << "**************************************" << std::endl;
		try 
		{
			B0.incrementGrade();
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << B0 << std::endl;
		std::cout << "**************************************" << std::endl;
		try 
		{
			B0.decrementGrade();
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << B0 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------------------" << std::endl;
	return (0);
}
