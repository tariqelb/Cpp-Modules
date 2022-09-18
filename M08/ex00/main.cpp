#include <vector>
#include "easyfind.hpp"



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
		v.push_back(-1);
		std::cout << easyfind(v, 3) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
