/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:01:53 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/21 20:44:59 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	ScavTrap scav1("ply1");
	ScavTrap scav2("ply2");
	
	std::cout << "------------------- attacks ---------------------" << std::endl;
	
	scav1.attack("ply2");
	scav2.takeDamage(20);
	scav2.beRepaired(10);
	scav1.guardGate();
	scav2.attack("ply1");
	scav1.takeDamage(20);
	scav1.beRepaired(10);
	scav2.guardGate();
	
	std::cout << "------------------- attacks ---------------------" << std::endl;

	return (0);
}
