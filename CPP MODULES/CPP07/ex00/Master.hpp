/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Master.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:25:07 by ahussein          #+#    #+#             */
/*   Updated: 2024/06/04 16:25:07 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template< typename T>
void    swap(T& a, T& b)
{
    T swap = a;
    a = b;
    b = swap;
}

template< typename T>
T&  min(T& a, T& b)
{
    return a > b ? b:a;
}


template< typename T>
T&  max(T& a, T& b)
{
    return a > b ? a:b;
}

#endif