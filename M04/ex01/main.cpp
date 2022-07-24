#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal* a[100];
	Animal* b[100];
	int index;
	
	std::cout << "----------------------------------" << std::endl;

	index = 0;
	while (index < 100)
	{
		if (index < 50)
			a[index] = new Cat();
		else
			a[index] = new Dog();
		b[index] = a[index];
		index++;
	}

	std::cout << "----------------------------------" << std::endl;
	index = 0;
	while (index < 100)
	{
		b[index]->setType("Zombie");
		index++;
	}
	std::cout << "----------------------------------" << std::endl;
	index = 0;
	while (index < 100)
	{
		a[index]->makeSound();
		std::cout << "b -> ";
		b[index]->makeSound();
		//std::cout << &a[index] <<  "  " << &b[index] << std::endl;
		index++;
	}

	std::cout << "----------------------------------" << std::endl;
	
	index = 0;
	while (index < 100)
	{
		delete a[index];
		delete b[index];
		index++;
	}

	std::cout << "----------------------------------" << std::endl;
	return 0;	
}
