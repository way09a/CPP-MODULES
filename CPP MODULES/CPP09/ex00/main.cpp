/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:09:34 by ahussein          #+#    #+#             */
/*   Updated: 2024/08/12 20:09:35 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange bit;
		bit.execute(argv[1]);
		return (0);
	}
	else
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	return (0);
}