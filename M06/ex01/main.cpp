#include "Data.hpp"
#include <iostream>

int	main(void)
{
	Data*		d1 = new Data();
	Data*		d2 = NULL;
	
	d1->str = "Tariq";
	d1->nbr = 39;
	d1->ch  = 'a';

	uintptr_t	p1;
	uintptr_t	p2;
	
	p1 = serialize(d1);
	std::string *str1 = reinterpret_cast<std::string *>(p1);
	std::cout << *str1  << std::endl;
	*str1 = "learn";
	std::cout << "-----------------------------------" << std::endl;
	str1++;
	int *nbr1 = reinterpret_cast<int *>(str1);
	std::cout << *nbr1  << std::endl;
	*nbr1 = 44;
	std::cout << "-----------------------------------" << std::endl;
	nbr1++;
	char *c = reinterpret_cast<char *>(nbr1);
	std::cout << *c  << std::endl;
	*c = 'A';
	nbr1 = reinterpret_cast<int *>(c);
	nbr1--;
	std::cout << "-----------------------------------" << std::endl;
	str1 = reinterpret_cast<std::string *>(nbr1);
	str1--;
	p2 = reinterpret_cast<uintptr_t>(str1);
	d2 = deserialize(p2);
	std::cout << d2->str  << std::endl;
	std::cout << d2->nbr  << std::endl;
	std::cout << d2->ch  << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << d1->str  << std::endl;
	std::cout << d1->nbr  << std::endl;
	std::cout << d1->ch  << std::endl;
	delete d1;
	return (0);
}
