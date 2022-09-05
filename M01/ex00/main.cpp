/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:17:17 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/18 16:38:18 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie	z1;
    Zombie* z2;
	
    randomChump("chump");
    z1.setName("foo");
    z1.announce();
    z2 = newZombie("bar");
    if (z2 != nullptr)
	{
		z2->announce();
    	z2->setName("bar child");
    	z2->announce();
    	delete z2;
	}
    return (0);
}
