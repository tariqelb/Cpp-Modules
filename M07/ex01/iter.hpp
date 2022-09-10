/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:56:32 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/09 11:40:35 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void print(T val)
{
	std::cout << val << std::endl;
}

template <typename T>
void	iter(T* arr, int len, void (*fun)(T elem))
{
	int i;

	i = 0;
	while (i < len)
	{
		fun(arr[i]);
		i++;
	}
}

#endif
