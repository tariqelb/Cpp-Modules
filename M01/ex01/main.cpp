/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:35:24 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/18 16:51:40 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *z = NULL;
    int     i;
	long		N;

	N = 5;
    i = 0;
    z = zombieHorde(N, "zoom");
    if (!z)
		return 0;
	
	while (i < N)
    {
        z[i].announce();
        i++;
    }
    delete [] z;
    return (0);
}
