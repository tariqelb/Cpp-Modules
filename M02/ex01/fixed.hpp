#ifndef _FIXED_H_
# define _FIXED_H_

#include <iostream>

class Fixed
{
	private:
		int			fixedPoint;
		static  int const	fractalBit = 8;

	public:
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		int	toInt(void) const;
		float	toFloat(void) const;
	
	Fixed(); // constructer
	Fixed(Fixed& rfcp); // copy constructor
	Fixed& operator=(Fixed& rfcp); // copy assignment operator
	~Fixed(); // destructor
	Fixed(int const fp); // int constructor
	Fixed(float const fp);	// float constructor
};

#endif
