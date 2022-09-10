/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:31:37 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/10 13:48:56 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
	private:
		T* 				arr;
		unsigned int	len;
	
	public:
		Array<T>()
		{
			arr = new T[0];
			len = 0;
		}
		
		Array<T>(unsigned int size)
		{
			arr = new T[size];
			len = size;
		}

		Array<T>(const Array& rhs)
		{
			*this = rhs;
		}
		Array<T>&	operator=(const Array& rhs)
		{
			if (this != &rhs)
			{
				delete[] this->arr;
				Array<T>(rhs.size);
				int	i;

				i = 0;
				while (i < rhs.size())
				{
					arr[i] = rhs.getArr()[i];
					i++;
				}
			}
			return (*this);
		}
		T&	operator[](int index)
		{
			//try
		//	{
				if (index < 0 || (unsigned int) index >= this->len)
					throw(std::exception());
				return (this->arr[index]);
		//	}
			/*catch (std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
			return (NULL);*/
		}

		~Array<T>()
		{
			delete [] this->arr;
		}
		int	size(void)
		{
			return (this->len);
		}
		T	getArr(void)
		{
			return (this->arr);
		}
};

#endif
