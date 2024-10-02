/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:43:55 by Ahussein          #+#    #+#             */
/*   Updated: 2024/03/04 21:22:39 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat B("Ayoob", 42);
	Form F("AnyForm", 2, 75);
	
	B.signForm(F);
	std::cout << B;
}
