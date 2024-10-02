/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:01:31 by ahussein          #+#    #+#             */
/*   Updated: 2024/05/30 13:01:31 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <stdint.h>
struct Data
{
	std::string	s;
	int			n;
};

class Serialize
{
	private:
		Serialize();
		Serialize(Serialize const &object);
		Serialize & operator=(Serialize const &rhs);

	public:
		~Serialize();
		static uintptr_t	serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif