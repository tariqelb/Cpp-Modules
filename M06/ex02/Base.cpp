#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <exception>

Base::~Base()
{}

Base * generate(void)
{
	A* derive = new A();
	return (dynamic_cast<Base *>(derive));
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Pointer Object A"  << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Pointer Object B"  << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Pointer Object C"  << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Reference Object A"  << std::endl;
	}
	catch (std::exception& e)
	{
	}
	try
	{
		B& b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Reference Object B"  << std::endl;
	}
	catch (std::exception& e)
	{
	}
	try
	{
		C& c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Reference Object C"  << std::endl;
	}
	catch (std::exception& e)
	{
	}
}
