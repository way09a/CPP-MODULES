/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:26:06 by ahussein          #+#    #+#             */
/*   Updated: 2024/06/04 16:26:06 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> a(10);
    
    try
    {
        a[6] = 5;
        std::cout << a[2] << std::endl;
        std::cout << a[50] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "index is out of range" << std::endl;
    }
    return (0);
}