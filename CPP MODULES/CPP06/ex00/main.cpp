/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:56:51 by ahussein          #+#    #+#             */
/*   Updated: 2024/05/30 12:56:51 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool is_num(std::string str)
{
	if ((str.find_first_not_of("0123456789") == std::string::npos)
		|| (str.find_first_not_of("-0123456789") == std::string::npos && str[0] == '-'))
		return (true);
	return (false);
}

bool is_float(std::string str)
{
	if ((str.find_first_not_of("0123456789.f") == std::string::npos)
		|| (str.find_first_not_of("-0123456789.f") == std::string::npos && str[0] == '-'))
		return (true);
	return (false);
}

bool is_double(std::string str)
{
	if ((str.find_first_not_of("0123456789.") == std::string::npos)
		|| (str.find_first_not_of("-0123456789.") == std::string::npos && str[0] == '-'))
		return (true);
	return (false);
}

bool is_char(std::string str)
{
	if (str.length() == 1 && (str != "nan" || str != "inff" || str != "-inff"))
		return (true);
	else if (str == "nan" || str == "nanf" || str == "inff" ||
			str == "-inff" || str == "+inff" ||
				str == "inf" || str == "+inf" || str == "-inf")
		return (true);
	return (false);
}

bool is_convertable(std::string str)
{
	if (is_num(str) || is_double(str) || is_float(str) || is_char(str))
		return (true);
	return (false);
}


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (1);
	}
	if (is_convertable(av[1]))
		ScalarConverter::convert(av[1]);
	else
		std::cout << "Error" << std::endl;
}

/*
    "nan" - represents a NaN (not a number) value
    "nanf" - represents a NaN (not a number) value with a float suffix
    "+inf" - represents positive infinity
    "inf" - represents positive or negative infinity
    "-inf" - represents negative infinity
    "+inff" - represents positive infinity with a float suffix
    "inff" - represents positive or negative infinity with a float suffix
    "-inff" - represents negative infinity with a float suffix
*/