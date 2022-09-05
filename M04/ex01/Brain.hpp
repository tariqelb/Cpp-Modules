/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:23 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 17:14:38 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	private :
		std::string	ideas[100];
	
	public :
		std::string			getIdea(int index) const;
		void				setIdea(int index, std::string name);

	Brain();
	Brain(std::string type[100]);
	Brain(const Brain& rhs);
	Brain&	operator=(const Brain& rhs);
	~Brain();
};

#endif
