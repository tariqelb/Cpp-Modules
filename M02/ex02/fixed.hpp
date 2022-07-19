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

	// orthodox canonical class form
	Fixed();					// constructer
	Fixed(int const fp);				// int constructor
	Fixed(float const fp);				// float constructor
	Fixed(const Fixed& rfcp); 			// copy constructor
	Fixed& operator=(const Fixed& rfcp); 		// copy assignment operator
	~Fixed();					// destructor

	// comparision operator
	bool	operator==(const Fixed& rhs) const;	// == operator
	bool	operator!=(const Fixed& rhs) const;	// != operator
	bool	operator>(const Fixed& rhs) const;	// > operator
	bool	operator<(const Fixed& rhs) const;	// < operator
	bool	operator>=(const Fixed& rhs) const;	// >= operator
	bool	operator<=(const Fixed& rhs) const;	// <= operator
	
	// arithmetic operator 
	Fixed&	operator*(const Fixed& rhs);	// * operator)
	Fixed&	operator/(const Fixed& rhs) const;	// / operator)
	Fixed&	operator+(const Fixed& rhs) const;	// + operator)
	Fixed&	operator-(const Fixed& rhs) const;	// - operator)

	// increament/decreament operator
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

};

std::ostream&	operator<<(std::ostream& outStream, const Fixed& fixed);

#endif
