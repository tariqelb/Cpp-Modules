/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:53:21 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/11 14:20:04 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <complex>

/*
class Complex
{
	public:
		int rel;
		int img;

	Complex(): rel(0), img(0) {}
	Complex(int _rel, int _img): rel(_rel), img(_img) {}
	Complex(const Complex& rhs)
	{
		*this = rhs;
	}
	Complex&	operator=(const Complex& rhs)
	{
		if (this != &rhs)
		{
			this->rel = rhs.rel;
			this->img = rhs.img;
		}
		return (*this);
	}
	~Complex(){};
	void display()
	{
		std::cout << "rel " << this->rel << "\nimg " << this->img << std::endl;
	}
	void add(Complex c1, Complex c2)
	{
		this->rel = c1.rel + c2.rel;
		this->img = c1.img + c2.img;
	}
};

std::ostream&	operator<<(std::ostream& o, const Complex& rhs)
{
	o << "(" << rhs.rel << ", ";
	o << rhs.img << ")" << std::endl;
	return (o);
}



int	main(void)
{
	Array<Complex> A(2);
	int i;

	i = 0;
	try 
	{
		while (i < 3)
		{
			Complex a(1, 2);
			A[i] = a;
			std::cout << A[i] << std::endl;
			i++;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
*/

int	main(void)
{
	Array<std::complex<int> > A(2);
	int index;

	index = 0;
	try 
	{
		while (index < 3)
		{
			std::complex<int> z(1,2);
			A[index] = z;
			std::cout << A[index] << std::endl;
			index++;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------------" << std::endl;
	index = 0;
	Array<double> B1(5);
	while (index < 5)
	{
		B1[index] = index * index;
		index++;
	}
	Array<double> B2;
	B2 = B1;
	index = 0;
	while (index < B2.size())
	{
		B2[index] = B2[index] + 1;
		index++;
	}
	index = 0;
	while (index < B1.size())
	{
		std::cout << "B1 :" << B1[index] << std::endl;
		index++;
	}
	std::cout << "-------------------------" << std::endl;
	index = 0;
	while (index < B1.size())
	{
		std::cout << "B2 :" << B2[index] << std::endl;
		index++;
	}
	return (0);
}
