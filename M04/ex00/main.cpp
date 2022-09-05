/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:14:20 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 11:29:28 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "---------------------------" << std::endl;

	const Animal* k = new Dog("D_DOG");
	const Animal* l = new Cat("C_CAT");
	std::cout << "---------------------------" << std::endl;


	std::cout << "---------------------------" << std::endl;
	std::cout << j->getType() << " --" << std::endl;
   	std::cout << i->getType() << " --" << std::endl;
	std::cout << k->getType() << " --" << std::endl;
   	std::cout << l->getType() << " --" << std::endl;
	
	std::cout << "---------------------------" << std::endl;
	i->makeSound(); //will output the cat sound! i->makeSound();
	j->makeSound();
	std::cout << "---------------------------" << std::endl;
	k->makeSound();
	l->makeSound();
	std::cout << "---------------------------" << std::endl;
	meta->makeSound();
	std::cout << "---------------------------" << std::endl;

	const WrongAnimal* aa = new WrongAnimal();
	const WrongAnimal* a = new WrongCat();
	
	std::cout << "---------------------------" << std::endl;
	
	std::cout << aa->getType() << " --" << std::endl;
	std::cout << a->getType() << " --" << std::endl;

	std::cout << "---------------------------" << std::endl;

	aa->makeSound();
	a->makeSound();

	std::cout << "---------------------------" << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << "---------------------------" << std::endl;
	delete k;
	delete l;
	std::cout << "---------------------------" << std::endl;
	delete aa;
	delete a;
	
	return 0;	
}
