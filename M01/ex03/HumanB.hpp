/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:43:45 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/18 12:50:23 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon*     weapon;

	public:
        std::string getName(void);
        void        attack(void);
        void        setWeapon(Weapon& w);

    HumanB(std::string s);
    ~HumanB();
};

// Weapon in this class not always initialized so the use of reference will lead you to an error

#endif
