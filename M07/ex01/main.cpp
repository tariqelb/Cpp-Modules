/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:08:06 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/10 11:15:08 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

class Awesome
{
	public:
		Awesome(void): _n(39) {return;}
		int get(void) const {return this->_n;}
	private:
		int _n;
};

std::ostream& operator<<(std::ostream& o, Awesome const & rhs) { o << rhs.get(); return o;}

template<typename T>
void print(T const & x) {std::cout << x << std::endl; return ;}

int	main(void)
{
	//int arr[4] = {1,2,3,4};
	//iter(arr, 4, print);
	int tab[] = {0,1,2,3,4,5};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2 ,5, print);

	return (0);
}
