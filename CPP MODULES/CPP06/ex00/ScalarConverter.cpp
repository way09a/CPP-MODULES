/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:00:49 by ahussein          #+#    #+#             */
/*   Updated: 2024/05/30 13:00:49 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &other) {
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other) {
    (void)other;
    return *this;
}

void ScalarConverter::toChar(std::string s)
{
	int i;
	char c;
	std::stringstream ss(s);

  if (s.length() == 1 && isascii(s[0]) && !isdigit(s[0]))
  {
      c = (char)s[0];
      std::cout << "char: " << "\'" << c << "\'" << std::endl;
      return ;
  }
	if (ss >> i)
	{
		if (i >= 0 && i <= 127)
		{
			c = static_cast<char>(i);
			if (c < 32 || c > 126)
				std::cout << "char: Non displayable\n";
			else
				std::cout << "char: '" << c << "'" << std::endl;
		}
		else
			std::cout << "char: impossible\n";
	}
	else
		std::cout << "char: impossible\n";
}

void ScalarConverter::toInt(std::string s)
{
	int i;
	std::stringstream ss(s);

  if (s.length() == 1 && !s.empty() && !isdigit(s[0]))
  {
      i = static_cast<int>(s[0]);
      std::cout << "int: " << i << std::endl;
      return ;
  }
	if (ss >> i)
	{
		i = static_cast<int>(atoi(s.c_str()));
		std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int: impossible\n";
}

void ScalarConverter::toFloat(std::string s)
{
    char* end;
    float nbr = std::strtof(s.c_str(), &end);

    //  check if the float value has no decimal part.
    if (*end == '\0' && nbr - static_cast<int>(nbr) == 0) {
        std::cout << "float: " << nbr << ".0f" << std::endl;
        return ;
    }
    std::cout << "float: " << nbr << "f" << std::endl;
}


void ScalarConverter::toDouble(std::string s)
{
    char * end;
    double nbr = std::strtod(s.c_str(), &end);

    //  check if the double value has no decimal part.
    if (*end == '\0' && nbr - static_cast<int>(nbr) == 0) {
        std::cout << "double: " << nbr << ".0" << std::endl;
        return ;
    }
    std::cout << "double: " << nbr << std::endl;
}

void ScalarConverter::convert(std::string s)
{
	toChar(s);
	toInt(s);
	toFloat(s);
	toDouble(s);
}