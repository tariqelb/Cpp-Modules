/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:39:32 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/19 15:40:02 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>

template <typename T>
int	easyfind(T& v, int find)
{
	typename T::iterator it;
	
	it = std::find(v.begin(), v.end(), find);
	if (it != v.end())
		return (*it);
	else
		throw(std::exception());
}

#endif
