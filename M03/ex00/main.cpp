#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap law("Law");
	ClapTrap saw("Saw");
	
	std::cout << "----------- Round one ------------" << std::endl;
	saw.attack("Law");
	law.takeDamage(10);
	law.beRepaired(10);
	
	std::cout << "----------- Round two ------------" << std::endl;
	
	saw.attack("Law");
	law.takeDamage(10);
	law.beRepaired(10);
	
	std::cout << "----------- Round three ------------" << std::endl;
	
	law.attack("saw");
	saw.takeDamage(50);
	saw.beRepaired(10);

	std::cout << "----------- the end ------------" << std::endl;
	

	return (0);

}
