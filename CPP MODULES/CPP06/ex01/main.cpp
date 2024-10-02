/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:01:17 by ahussein          #+#    #+#             */
/*   Updated: 2024/05/30 13:01:17 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
	Data data;
	data.s = "Data";
	data.n = 42;

    uintptr_t serialized = Serialize::serialize(&data);

    Data* deserialized = Serialize::deserialize(serialized);

    std::cout << "Deserialized data: " << deserialized-> s << ", " << deserialized-> n << std::endl;

    if (deserialized == &data) {
        std::cout << "Pointer comparison successful" << std::endl;
        std::cout << deserialized << std::endl;
        std::cout << &data  << std::endl;
        std::cout << data.s <<  std::endl;
        std::cout <<  data.n <<  std::endl;
    } else {
        std::cout << "Pointer comparison failed" << std::endl;
    }

    return 0;
}