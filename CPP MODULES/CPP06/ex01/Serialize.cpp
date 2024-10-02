/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:01:26 by ahussein          #+#    #+#             */
/*   Updated: 2024/05/30 13:01:26 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
}

Serialize::Serialize(Serialize const &object)
{
	*this = object;
}

Serialize & Serialize::operator=(Serialize const &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

Serialize::~Serialize()
{
}

uintptr_t	Serialize::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}