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
	
	a[6]->getBrain()->setIdea(0, "tot");
	a[6]->getBrain()->setIdea(1, "toot");
	a[6]->getBrain()->setIdea(2, "ta ra");
	a[6]->getBrain()->setIdea(3, "tott tot");
	a[6]->getBrain()->setIdea(4, "no ");
	a[6]->getBrain()->setIdea(5, "no way");

	std::cout << "----------------------------------" << std::endl;
	Dog* cp = new Dog();	
	cp = ((Dog *)a[6]);
	Brain *br = cp->getBrain();
	br->setIdea(0, "Art Store");
	br->setIdea(1, "craft workers");
	br->setIdea(2, "Handcraft job app");
	br->setIdea(3, "eassy  to get a handcraft man");
	br->setIdea(4, "Promotion space for a handcraft man");
	br->setIdea(5, "Go to zero, and think again");
	
	std::cout << "----------------------------------" << std::endl;
	
	std::cout << a[6]->getBrain()->getIdea(0) << std::endl;
	std::cout << a[6]->getBrain()->getIdea(1) << std::endl;
	std::cout << a[6]->getBrain()->getIdea(2) << std::endl;
	std::cout << a[6]->getBrain()->getIdea(3) << std::endl;
	std::cout << a[6]->getBrain()->getIdea(4) << std::endl;
	std::cout << a[6]->getBrain()->getIdea(5) << std::endl;

	std::cout << "----------------------------------" << std::endl;
	
	a[6]->getBrain()->setIdea(0, "just talk");
	a[6]->getBrain()->setIdea(1, "no way");

	std::cout << "----------------------------------" << std::endl;
	
	std::cout << a[6]->getBrain()->getIdea(0) << std::endl;
	std::cout << a[6]->getBrain()->getIdea(1) << std::endl;
	
	std::cout << "----------------------------------" << std::endl;
	
	std::cout << cp->getBrain()->getIdea(0) << std::endl;
	std::cout << cp->getBrain()->getIdea(1) << std::endl;

	std::cout << "----------------------------------" << std::endl;

	std::cout << "address" << &cp << "  " << &a[6] << std::endl;
	index = 0;
	while (index < 10)
	{
		delete a[index];
		index++;
	}
	std::cout << "----------------------------------" << std::endl;
	return 0;	
}
