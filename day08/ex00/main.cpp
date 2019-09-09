/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 10:57:26 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/10 11:07:39 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <string>
#include <iostream>
#include "easyfind.hpp"

int				main(void) {
	std::list<int>::iterator	result;
	std::list<int>				lst;

	lst.push_back(1);
	lst.push_back(7);
	lst.push_back(21);
	lst.push_back(84);

	std::cout << "Search the value 21: ";
	result = easyfind(lst, 21);
	if (result != lst.end()) {
		std::cout << *result << std::endl;
    }
	else {
		std::cout << "Not found" << std::endl;
    }
	std::cout << "Change the found value to 42" << std::endl;
	*result = 42;
	std::cout << "Search the value 21: ";
	result = easyfind(lst, 21);
	if (result != lst.end()) {
		std::cout << *result << std::endl;
    }
	else {
		std::cout << "Not found" << std::endl;        
    }
	std::cout << "Search the value 42: ";
	result = easyfind(lst, 42);
	if (result != lst.end()) {
		std::cout << *result << std::endl;
    }
	else {
		std::cout << "Not found" << std::endl;
    }
	return (0);
}
