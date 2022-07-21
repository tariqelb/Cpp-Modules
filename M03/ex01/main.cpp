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
	ScavTrap scav3( scav2 );
	//ScavTrap scav4 = scav1;
	
	std::cout << "------------------- attacks ---------------------" << std::endl;
	
	scav1.attack("Machone!!");
	scav2.takeDamage(10);
	scav2.beRepaired(10);
	scav2.guardGate();
	scav3.attack("wooooooooopy!!!");
	//scav4.attack("woooooooopy!!!!");
	
	std::cout << "------------------- attacks ---------------------" << std::endl;

	return (0);
}
