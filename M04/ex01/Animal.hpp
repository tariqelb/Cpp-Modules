/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:37:40 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 20:26:51 by tel-bouh         ###   ########.fr       */
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
		virtual void		makeSound(void) const;
		const std::string&	getType() const;

	Animal();
	Animal(std::string type);
	Animal(const Animal& rhs);
	Animal&	operator=(const Animal& rhs);
	virtual ~Animal();
};

#endif
