/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:14:00 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 11:26:04 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected :
		std::string	type;

	public :
		void				makeSound(void) const;
		const std::string&	getType(void) const;

	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& rhs);
	WrongAnimal& operator=(const WrongAnimal& rhs);
	~WrongAnimal();
};

#endif
