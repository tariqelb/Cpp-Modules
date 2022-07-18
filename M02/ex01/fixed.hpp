#ifndef _FIXED_H_
# define _FIXED_H_

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int			fixedPoint;
		static  int const	fractalBit = 8;

	public:
		int		getRawBits(void) const;
		void		setRawBits(int const raw);
		int		toInt(void) const;
		float		toFloat(void) const;

	Fixed();				// constructer
	Fixed(int const fp);			// int constructor
	Fixed(float const fp);			// float constructor
	Fixed(const Fixed& rfcp); 		// copy constructor
	Fixed& operator=(const Fixed& rfcp); 	// copy assignment operator
	~Fixed();				// destructor
};

std::ostream&	operator<<(std::ostream& outStream, const Fixed& fixed);

#endif
