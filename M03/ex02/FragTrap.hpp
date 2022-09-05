/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:06:38 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/20 19:06:52 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		void	highFivesGuys(void);

	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& rhs);
	FragTrap&	operator=(const FragTrap& rhs);
	~FragTrap();
};

#endif
