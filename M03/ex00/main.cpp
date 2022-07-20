#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap law("Law");
	ClapTrap saw("Saw");
	
	saw.attack("Law");
	law.takeDamage(10);
	law.beRepaired(10);
	return (0);
}
