/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:54:18 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/20 17:26:33 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main( void )
{
	Fixed a;
	Fixed e;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	e = Fixed( 1254.41f );
	std::cout << "-------------------------------------\n";
	std::cout << "a is " << a << " as Float" << std::endl;
	std::cout << "b is " << b << " as Float" << std::endl;
	std::cout << "c is " << c << " as Float" << std::endl;
	std::cout << "d is " << d << " as Float" << std::endl;
	std::cout << "-------------------------------------\n";
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "-------------------------------------\n";
	
	if (b == c)
		std::cout << "equal\n";
	else
		std::cout << "not equal\n";

	if (a > c)	
		std::cout << "greater than\n";
	else
		std::cout << "not greater than\n";

	if (b < a)
		std::cout << "less than\n";
	else
		std::cout << "not less than\n";

	if (a >= b)
		std::cout << "great than or equal\n";
	else
		std::cout << "not great than or equal \n";

	if (c >= a)
		std::cout << "less than or equal\n";
	else
		std::cout << "not less than or equal \n";

	if (a != b)
		std::cout << "not equal\n";
	else
		std::cout << "equal \n";

	if (d != b)
		std::cout << "not equal\n";
	else
		std::cout << "equal \n";

	
	
	std::cout << "-------------------------------------\n";
	std::cout << "D fi = " << d.getRawBits() << std::endl; 
	std::cout << "D i = " << d.toInt() << std::endl; 
	std::cout << "D f = " << d.toFloat() << std::endl; 	
	std::cout << "-------------------------------------\n";
	std::cout << "--> " << Fixed::constMin(b, c) << std::endl;
	std::cout << "--> " << Fixed::Min(a, e) << std::endl;
	std::cout << "--> " << Fixed::constMax(b, c) << std::endl;
	std::cout << "--> " << Fixed::Max(a, e) << std::endl;
	std::cout << "-------------------------------------\n";
	
	a.setRawBits(0);

	std::cout << "-------------------------------------\n";
	std::cout << "a   : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a++ : "<< a++ << std::endl;
	std::cout << "a   : " << a << std::endl;

	return 0;
}
