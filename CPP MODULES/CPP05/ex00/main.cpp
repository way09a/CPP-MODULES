/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:24:58 by Ahussein          #+#    #+#             */
/*   Updated: 2024/03/10 17:38:32 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// Bureaucrat C;
	Bureaucrat A("Ayoob", 150);
	std::cout << A << std::endl;
	A.gradeIncreament();
	std::cout << A << std::endl;
	A.gradeDecreament();
	std::cout << A << std::endl;
	Bureaucrat b("Ay09a", 50);
	std::cout << b << std::endl;
	b.gradeDecreament();
	std::cout << b << std::endl;
	b.gradeIncreament();
	std::cout << b << std::endl;
	return 0;
}