/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:41:54 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/19 15:42:02 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span s(4);
	
	std::vector<int>::iterator it;
	std::cout << s.getVector().size() << std::endl;
	

	s.addNumber(16);
	s.addNumber(16);
	s.addNumber(17);
	s.addNumber(27);
	s.addNumber(15);
	it = s.getVector().begin();
	std::cout << "--------- " << std::endl;
	while (it != s.getVector().end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << "--------- " << std::endl;
	try
	{
		std::cout << "Sort Span " << s.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------- " << std::endl;
	try
	{
		std::cout << "Long Span " <<s.longestSpan() << std::endl;	
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::vector<int> range(10, 1010);
	std::cout << "--------- " << std::endl;
	s.addRange(range);
	std::cout << "--------- " << std::endl;	
	it = s.getVector().begin();
	while (it != s.getVector().end())
	{
		std::cout << *it << " , ";
		it++;
	}
	std::cout << "--------- " << std::endl;
	Span d(0);
	try
	{
		std::cout << "Sort Span " << d.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
