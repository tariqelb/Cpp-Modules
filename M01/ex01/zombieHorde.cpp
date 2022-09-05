/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:26:59 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/18 16:51:47 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*     zombieHorde(int N, std::string name)
{
	if (N <= 0 || name.empty())
	{
		if (N <= 0)
			std::cerr << "Invalide number of zombie" << std::endl;
		else
			std::cerr << "Name is an empty string" << std::endl;
		return (NULL);
	}
    
	Zombie* zom =  new(std::nothrow) Zombie[N];
    if (zom == NULL)
	{
		std::cerr << "Fail to allocate memory" << std::endl;
		return (NULL);
	}
	int     i;

    i = 0;
    while (i < N)
    {
        zom[i].setName(name);
        i++;
    }
    return (zom);
}
