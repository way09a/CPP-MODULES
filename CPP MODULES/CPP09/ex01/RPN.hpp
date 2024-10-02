/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:09:56 by ahussein          #+#    #+#             */
/*   Updated: 2024/08/12 20:09:56 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN
{
    private:
    public:

    RPN();
    RPN(const RPN &rhs);
	~RPN();
	RPN &operator=(const RPN &rhs);
    double execute(const std::string &value);
};

#endif