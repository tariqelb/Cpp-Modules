/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:43:52 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/16 23:11:01 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string	name;
        Weapon&		weapon;

    public:
        std::string getName(void);
        void        attack(void);

    HumanA(std::string s, Weapon& w);
    ~HumanA();
};

// Weapon in this class is always initialized so you can use pointer or reference

#endif
