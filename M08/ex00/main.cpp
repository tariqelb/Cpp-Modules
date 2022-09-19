#include "easyfind.hpp"
#include <vector>
#include <list>

int	main(void)
{
	std::vector<int> v(5);
	int i;
	
	i = 0;
	while (i < 5)
	{
		v[i] = i;;
		i++;
	}
	try
	{
		std::cout << easyfind(v, 3) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::list<int> s;
	s.push_back(1);
	s.push_back(3);
	s.push_back(5);
	s.push_back(7);
	
	try
	{
		std::cout << easyfind(s, 15) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
