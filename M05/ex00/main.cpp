#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat B0;
	Bureaucrat B1("me", 2);

	B0 = B1;

	B0.incrementGrade();
	B1.decrementGrade();
	
	std::cout << B0 << std::endl;
	std::cout << B1 << std::cout;

	B0.incrementgrade();
	
	std::cout << "Programe is continues running" << std::endl;
	return (0);
}
