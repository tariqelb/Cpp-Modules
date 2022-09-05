/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:43:58 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/16 23:11:07 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&     Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string s)
{
    this->type = s;
}

Weapon::Weapon(){}

Weapon::Weapon(std::string w):type(w)
{}

Weapon::~Weapon(){}
