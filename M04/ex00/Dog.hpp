/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:13:28 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/31 13:17:13 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public :
		void				makeSound(void) const;
		const std::string&	getType() const;

	Dog();
	Dog(std::string type);
	Dog(const Dog& rhs);
	Dog&	operator=(const Dog& rhs);
	~Dog();
};

#endif
