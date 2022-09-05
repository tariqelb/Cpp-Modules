/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:03:54 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/20 19:04:10 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void	attack(const std::string& target);
		void	guardGate(void);

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& rhs);
	ScavTrap&	operator=(const ScavTrap& rhs);
	~ScavTrap();
};

#endif
