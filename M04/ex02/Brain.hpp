/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:04:59 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 20:10:23 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private :
		std::string	ideas[100];

	public :
		std::string	getIdea(int index);
		void		setIdea(int index, const std::string);
	
	Brain();
	Brain(std::string ideas[100]);
	Brain(const Brain& rhs);
	Brain&	operator=(const Brain& rhs);
	~Brain();
};

#endif
