#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal* a[10];
	int index;
	
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
	Brain br;
	br = &a[1]->getBrain();
	
	std::cout << "----------------------------------" << std::endl;
	
	index = 0;
	while (index < 10)
	{
		delete a[index];
		index++;
	}

	std::cout << "----------------------------------" << std::endl;
	return 0;	
}
