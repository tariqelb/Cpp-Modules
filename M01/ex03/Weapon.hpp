/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:44:00 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/18 15:03:33 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
    private:
        std::string type;

	public:
        const std::string&	getType(void);
        void				setType(std::string s);

    Weapon();
    Weapon(std::string s);
    ~Weapon();
};

#endif
