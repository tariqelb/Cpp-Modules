#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void)
{
	Dog* a = new Dog();
	std::cout << a->getType() << std::endl;
	delete a;
	return (0);
}
