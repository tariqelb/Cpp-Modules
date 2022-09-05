/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:29:24 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/20 17:31:46 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "-----------" << std::endl;
	std::cout << "a is " << a.getRawBits()  << std::endl;
	std::cout << "b is " << b.getRawBits()  << std::endl;
	std::cout << "c is " << c.getRawBits()  << std::endl;
	std::cout << "d is " << d.getRawBits()  << std::endl;	

	std::cout << "-----------" << std::endl;
	std::cout << "a is " << a << " as a Float" <<std::endl;
	std::cout << "b is " << b << " as a Float" << std::endl;
	std::cout << "c is " << c << " as a Float" << std::endl;
	std::cout << "d is " << d << " as a Float" << std::endl;

	std::cout << "-----------" << std::endl;	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	std::cout << "-----------" << std::endl;	
	return 0;
}
