/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:11:33 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 23:15:55 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <exception>


template< typename T >
class Array
{
	private:
		T				*_array;
		size_t			_size;

	public:
		Array<T>(void) : _array(NULL), _size(0)
		{
		}
		
		Array<T>(size_t size) : _array(new T[size]), _size(size)
		{
		}
		
		Array<T>(Array<T> const & array) : _array(new T[array._size]), _size(array._size)
		{
			for (size_t i = 0; i < array._size; i++)
				this->_array[i] = array._array[i];
		}

		~Array<T>()
		{
			delete [] this->_array;
		}

		Array<T>&	operator=(Array<T> const & array)
		{
			this->_size = array.size();
			this->_array = new T[array.size()];
			for (size_t i = 0; i < array.size(); i++)
				this->_array[i] = array._array[i];

			return (*this);
		}

		T			&operator[](size_t const index) const
		{
			if (index >= this->_size || index < 0)
				throw IndexOutOfLimitsException();
			return (this->_array[index]);
		}

		size_t	size(void) const
		{
			return (this->_size);
		}

		class IndexOutOfLimitsException : public std::exception
		{
			public:
				const char *what(void) const throw()
				{
					return ("Index out of limits");
				}
		};
};


#endif
