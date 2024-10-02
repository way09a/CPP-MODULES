/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:10:23 by ahussein          #+#    #+#             */
/*   Updated: 2024/08/12 20:10:24 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>


class PmergeMe
{
    public:
    PmergeMe();
    PmergeMe(const PmergeMe &object);
    PmergeMe &operator=(const PmergeMe &rhs);
    ~PmergeMe();
    void merg_vector(std::vector<int>& vec, int left, int mid, int right);
    void merg_list(std::list<int>& left, std::list<int>& right, std::list<int>& result);
    void merg_sort_vector(std::vector<int>& arr, int l, int r);
    void merg_sort_list(std::list<int>& lst);
};

#endif