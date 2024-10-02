/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:00:56 by ahussein          #+#    #+#             */
/*   Updated: 2024/05/30 13:00:56 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>

#include <cstdlib>
#include <sstream>

class ScalarConverter
{
public:
    ScalarConverter();
	ScalarConverter(ScalarConverter const &other);
	ScalarConverter &operator=(const ScalarConverter &other);
	~ScalarConverter();
	static void toInt(std::string s);
	static void toChar(std::string s);
	static void toFloat(std::string s);
	static void toDouble(std::string s);
	static void convert(std::string s);
};

#endif
