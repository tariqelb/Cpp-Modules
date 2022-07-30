#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat B("mo", 0);
	Bureaucrat B0("mo", 1);
	Bureaucrat B1("me", 2);

	std::cout << "--------------------" << std::endl;
	std::cout << B.getGrade() << std::endl;
	std::cout << "--------------------" << std::endl;
	B0.incrementGrade();
	B1.decrementGrade();
	std::cout << "--------------------" << std::endl;
	
	std::cout << B0 << std::endl;
	std::cout << B1 << std::endl;
	std::cout << "--------------------" << std::endl;

	B0.incrementGrade();
	
	std::cout << "--------------------" << std::endl;
	std::cout << "Programe is continues running" << std::endl;
	return (0);
}
