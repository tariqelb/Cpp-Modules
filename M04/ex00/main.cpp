#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
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

	Animal* o = new Dog();
	Animal* p = new Cat();
	std::cout << "---------------------------" << std::endl;

	o->setType("D_dog");
	p->setType("C_cat");

	std::cout << "---------------------------" << std::endl;
	std::cout << j->getType() << " --" << std::endl;
   	std::cout << i->getType() << " --" << std::endl;
	std::cout << k->getType() << " --" << std::endl;
   	std::cout << l->getType() << " --" << std::endl;
	std::cout << o->getType() << " --" << std::endl;
   	std::cout << p->getType() << " --" << std::endl;
	
	std::cout << "---------------------------" << std::endl;
	i->makeSound(); //will output the cat sound! j->makeSound();
	j->makeSound();
	std::cout << "---------------------------" << std::endl;
	k->makeSound();
	l->makeSound();
	std::cout << "---------------------------" << std::endl;
	o->makeSound();
	p->makeSound();
	std::cout << "---------------------------" << std::endl;
	meta->makeSound();
	std::cout << "---------------------------" << std::endl;

	const WrongAnimal* a = new WrongCat();
	
	std::cout << "---------------------------" << std::endl;
	
	std::cout << a->getType() << " --" << std::endl;

	std::cout << "---------------------------" << std::endl;

	a->makeSound();

	std::cout << "---------------------------" << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << "---------------------------" << std::endl;
	delete k;
	delete l;
	std::cout << "---------------------------" << std::endl;
	delete o;
	delete p;
	std::cout << "---------------------------" << std::endl;
	delete a;
	
	return 0;	
}
