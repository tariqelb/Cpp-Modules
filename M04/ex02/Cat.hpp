/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:04:04 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 20:10:11 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal
{
	private :
		Brain*	br;

	public :
		const std::string&	getType(void) const;
		void				makeSound(void) const;
		Brain*				getBrain(void) const;

	Cat();
	Cat(std::string type);
	Cat(const Cat& rhs);
	Cat&	operator=(const Cat& rhs);
	virtual ~Cat();
};

#endif
