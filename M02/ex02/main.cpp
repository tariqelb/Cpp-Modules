#include "fixed.hpp"
#include <iostream>

int	main( void )
{
/*	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
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
		std::cout << "not not equal \n";

	std::cout << "-------------------------------------\n";
	std::cout << "a " << a << std::endl;
	std::cout << "++a " << ++a << std::endl;
	std::cout << "a++ "<< a++ << std::endl;
	std::cout << "a " << a << std::endl;*/
	
	Fixed a;
//	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
//	std::cout << b << std::endl;	
	

	return 0;
}
