/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:14:09 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/31 13:18:32 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		void				makeSound(void) const;
		const std::string	getType(void) const;

	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat& rhs);
	WrongCat& operator=(const WrongCat& rhs);
	~WrongCat();
};

#endif
