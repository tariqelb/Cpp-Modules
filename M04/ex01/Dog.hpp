/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:38:59 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/01 14:36:11 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"


class Dog : public Animal
{
	private :
		Brain* br;

	public :
		void				makeSound(void) const;
		const std::string&	getType() const;	
		Brain*				getBrain() const;

	Dog();
	Dog(std::string type);
	Dog(const Dog& rhs);
	Dog&	operator=(const Dog& rhs);
	~Dog();
};

#endif
