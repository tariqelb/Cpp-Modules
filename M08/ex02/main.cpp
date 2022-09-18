#include "MutantStack.hpp"
#include <iostream>

/*
int	main()
{
	
	MutantStack<int> ms;
	MutantStack<int> ms2;
	
	ms.push(1);
	ms.push(11);
	ms.push(111);
	std::cout << "--------" << std::endl;	
	MutantStack<int>	ms1(ms);
	std::cout << "--------" << std::endl;	
	ms2 = ms;
	std::cout << "--------" << std::endl;
	ms2.push(5);
	ms2.push(55);
	ms2.push(555);
	ms2.swap(ms);	
	std::cout << "--------" << std::endl;
	while (!ms.empty())
	{
		std::cout << "val = " << ms.top() << std::endl;
		ms.pop();
	}
	std::cout << "--------" << std::endl;
	while (!ms2.empty())
	{
		std::cout << "val = " << ms2.top() << std::endl;
		ms2.pop();
	}
	return (0);
}*/


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
	std::stack<int> s(mstack); return 0;
}
