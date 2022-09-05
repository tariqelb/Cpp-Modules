/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:38:14 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/01 14:35:59 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal
{
	private :
		Brain* br;

	public :
		void				makeSound(void) const;
		const std::string&	getType() const;
		Brain*				getBrain() const;

	Cat();
	Cat(std::string type);
	Cat(const Cat& rhs);
	Cat&	operator=(const Cat& rhs);
	~Cat();
};

#endif
