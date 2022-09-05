/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:13:26 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/31 13:16:27 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public :
		void				makeSound(void) const;
		const std::string&	getType() const;

	Cat();
	Cat(std::string type);
	Cat(const Cat& rhs);
	Cat&	operator=(const Cat& rhs);
	~Cat();
};

#endif
