/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:05:06 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/20 19:05:11 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap law("Law");
	FragTrap saw("Saw");
	
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
	saw.highFivesGuys();

	return (0);

}
