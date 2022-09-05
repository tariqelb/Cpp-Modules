/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:03:55 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 20:10:13 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Dog : public Animal
{
	private :
		Brain*	br;

	public :
		const std::string&	getType(void) const;
		void				makeSound(void) const;
		Brain*				getBrain(void) const;
	
	Dog();
	Dog(std::string type);
	Dog(const Dog& rhs);
	Dog&	operator=(const Dog& rhs);
	virtual ~Dog();
};

#endif
