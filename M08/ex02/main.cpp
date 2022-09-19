/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:43:24 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/19 15:43:41 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) 
	{
		std::cout << *it << std::endl;
		++it; 
	}
	std::stack<int> s(mstack);
		
	std::cout << "----1---------------------------------" << std::endl;
	it = mstack.begin();
	--ite;
	while (it != ite) 
	{
		std::cout << *ite << std::endl;
		--ite; 
	}
	std::cout << *ite << std::endl;
	
	std::cout << "----2---------------------------------" << std::endl;
	
	while (!s.empty())
	{
		std::cout << s.top()  << std::endl;
		s.pop();
	} 
	
	std::cout << "---3---------------------------------" << std::endl;
	
	std::list<int> l;
	
	l.push_back(5);
	l.push_back(17);

	std::cout << l.back() << std::endl;
	l.pop_back();
	std::cout << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	std::list<int>::iterator iti = l.begin();
	std::list<int>::iterator itie = l.end();
	++iti;
	--iti;
	while (iti != itie)
	{
		std::cout << *iti << std::endl;
		++iti;
	}
		
	std::cout << "---4---------------------------------" << std::endl;
	std::list<int>	d(l);
	std::list<int>::iterator	ll = l.begin();
	while (ll != l.end())
	{
		std::cout << *ll << std::endl;
		ll++;
	}
	return 0;
	
}
