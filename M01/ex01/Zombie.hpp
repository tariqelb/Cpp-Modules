/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:34:40 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/18 14:55:05 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        std::string getName(void);
        void        setName(std::string zName);
        void        announce(void);

    Zombie();    
    Zombie(std::string name);    
    ~Zombie();
};

Zombie*     zombieHorde(int N, std::string name);

#endif
