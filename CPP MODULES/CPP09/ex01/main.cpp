/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:09:42 by ahussein          #+#    #+#             */
/*   Updated: 2024/08/12 20:09:42 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2) {
        std::cout << "Error: Invalid input";
		return 0;
    }
	try
	{
        RPN rpn;
        std::cout << rpn.execute(av[1]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	
	return 0;
}