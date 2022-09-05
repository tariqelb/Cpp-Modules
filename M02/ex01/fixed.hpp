/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:29:59 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/19 20:05:34 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					fixedPoint;
		static int const	fractalBit;

	public:
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

	Fixed();
	Fixed(int const fp);
	Fixed(float const fp);
	Fixed(const Fixed& rhs);
	Fixed& operator=(const Fixed& rhs);
	~Fixed();
};

std::ostream&	operator<<(std::ostream& outStream, const Fixed& fixed);

#endif
