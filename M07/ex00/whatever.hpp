/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:03:38 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/08 13:53:28 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>

void	swap(T var1, T var2)
{
	T temp;

	temp = var1;
	var1 = var2;
	var2 = temp;
}

template <typename A>
A	min(A var1, A var2)
{
	if (var1 < var2)
		return (var1);
	else if (var1 > var2)
		return (var2);
	return (var2);
}

template <typename A>
A	max(A var1, A var2)
{
	if (var1 < var2)
		return (var2);
	else if (var1 > var2)
		return (var1);
	return (var2);
}


#endif
