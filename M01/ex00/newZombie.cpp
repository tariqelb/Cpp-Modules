/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:08:59 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/18 16:52:16 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* zom = new(std::nothrow) Zombie(name);
	if (zom == NULL)
		std::cerr << "Fail to allocate memory" << std::endl;
	return (zom);
}
