/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:04:06 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 20:09:45 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected :
		std::string	type;

	public :
		const std::string&	getType(void) const;
		virtual void		makeSound(void) const = 0;
	
	Animal();
	Animal(const Animal& rhs);
	Animal&	operator=(const Animal& rhs);
	virtual ~Animal();
};

#endif
