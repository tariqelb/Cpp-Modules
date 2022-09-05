/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:48:28 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/19 20:07:12 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					fixedPoint;
		static int const	fractalBit;

	public:
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	Fixed();
	Fixed(Fixed& rhs);
	Fixed& operator=(Fixed& rhs);
	~Fixed();
};

#endif
