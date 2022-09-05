/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:47 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/01 14:43:29 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	Animal* a[10];
	int 	index;
	
	std::cout << "----------------------------------" << std::endl;

	index = 0;
	while (index < 10)
	{
		if (index < 5)
			a[index] = new Cat();
		else
			a[index] = new Dog();
		index++;
	}

	std::cout << "----------------------------------" << std::endl;
	index = 0;
	while (index < 10)
	{
		a[index]->makeSound();
		index++;
	}

	std::cout << "----------------------------------" << std::endl;
	Dog cp1;
	Dog cp2 = cp1;
	
	std::cout << "---------------iii-------------------" << std::endl;
	cp1.getBrain()->setIdea(0, "Art Store");
	cp1.getBrain()->setIdea(1, "craft workers");
	cp1.getBrain()->setIdea(2, "Handcraft jobs app");
	cp1.getBrain()->setIdea(3, "eassy to get a handcraft man");
	cp1.getBrain()->setIdea(4, "Promotion space for a handcraft service");
	cp1.getBrain()->setIdea(5, "back to zero, and think again");
	std::cout << "---------------oiooi-------------------" << std::endl;
	
	cp2.getBrain()->setIdea(0, "m");
	cp2.getBrain()->setIdea(1, "mmm");
	cp2.getBrain()->setIdea(2, "mmmmm");
	cp2.getBrain()->setIdea(3, "mmmmmmm");
	cp2.getBrain()->setIdea(4, "mmmmmmmmm");
	cp2.getBrain()->setIdea(5, "mmmmmmmmmmm");

	
	std::cout << "-------------iiii---------------------" << std::endl;
	std::cout << cp1.getBrain()->getIdea(0) << std::endl;
	std::cout << cp1.getBrain()->getIdea(1) << std::endl;
	std::cout << cp1.getBrain()->getIdea(2) << std::endl;
	std::cout << cp1.getBrain()->getIdea(3) << std::endl;
	std::cout << cp1.getBrain()->getIdea(4) << std::endl;
	std::cout << cp1.getBrain()->getIdea(5) << std::endl;


	std::cout << "--------------ooo--------------------" << std::endl;
	
	std::cout << cp2.getBrain()->getIdea(0) << std::endl;
	std::cout << cp2.getBrain()->getIdea(1) << std::endl;
	std::cout << cp2.getBrain()->getIdea(2) << std::endl;
	std::cout << cp2.getBrain()->getIdea(3) << std::endl;
	std::cout << cp2.getBrain()->getIdea(4) << std::endl;
	std::cout << cp2.getBrain()->getIdea(5) << std::endl;

	std::cout << "--------------copy--------------------" << std::endl;
	
	Dog basic;
	std::cout << "--------------copy--------------------" << std::endl;
	{
		Dog temp = basic;
	}
	std::cout << "--------------copy--------------------" << std::endl;

	std::cout << "address cp1 and cp2" << &cp1 << "  " << &cp2 << std::endl;
	index = 0;
	while (index < 10)
	{
		delete a[index];
		index++;
	}
	std::cout << "--------------copy--------------------" << std::endl;
	{
		Animal* a = new Animal();
		delete a;
	}
	
	std::cout << "--------------copy--------------------" << std::endl;
	
	//while (1){}
	return 0;	
}
