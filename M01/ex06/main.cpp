/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:16:02 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/17 20:22:20 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl a;
    
	if (ac != 2)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
    a.complain(av[1]);
    return (0);
}
