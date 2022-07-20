//#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
/*	ClapTrap law("Law");
	ClapTrap saw("Saw");
	
	saw.attack("Law");
	law.takeDamage(10);
	law.beRepaired(10);
	saw.attack("Law");
	law.takeDamage(10);
	law.beRepaired(10);
*/
	ScavTrap scav1("woooooooooopy!!");
	ScavTrap scav2("Machonre!!");
	
	scav1.attack("Machone!!");
	scav2.takeDamage(10);
	scav2.beRepaired(10);
	scav2.guardGate();
	return (0);
}
