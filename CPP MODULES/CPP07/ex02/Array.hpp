/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:26:01 by ahussein          #+#    #+#             */
/*   Updated: 2024/06/04 16:26:01 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <class T>
class Array
{
	T *_array;
	unsigned int _nb;

public:
	Array()
	{
		_array = new T[0];
		_nb = 0;
	}
	~Array()
	{
		delete[] _array;
	}
	Array(unsigned int n)
	{
		_array = new T[n];
		_nb = n;
	}
	Array(Array const &array)
	{
		_array = new T[array._nb];
		_nb = array._nb;
		for (unsigned int i = 0; i < _nb; i++)
			_array[i] = array._array[i];
	}
	Array &operator=(Array const &array)
	{
		if (this != &array)
		{
			delete[] _array;
			_array = new T[array._nb];
			_nb = array._nb;
			for (unsigned int i = 0; i < _nb; i++)
				_array[i] = array._array[i];
		}
		return (*this);
	}
	T &operator[](unsigned int i)
	{
		if (i >= _nb)
			throw std::exception();
		return (_array[i]);
	}
	unsigned int size() const
	{
		return (_nb);
	}
};

#endif