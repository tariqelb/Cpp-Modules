/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:17:09 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/17 21:20:11 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
    private:
        std::string name;
    
    public:
        void        announce(void);
        std::string getName(void);
        void        setName(std::string s);

    Zombie();
    Zombie(std::string zName);
    ~Zombie();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
