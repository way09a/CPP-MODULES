/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 08:28:21 by ahussein          #+#    #+#             */
/*   Updated: 2024/08/11 08:29:01 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    try
    {
        std::cout << easyfind(v, 4) << std::endl;
        
    }
    catch (std::exception &e)
    {
        std::cout << "Err: " << e.what() << std::endl;
    }
    return (0);
}