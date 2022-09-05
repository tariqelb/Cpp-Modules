/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:57:37 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/21 20:22:58 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
