/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:29:40 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/09 15:30:19 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Convert.hpp"

int				main(int ac, char **av)
{
	if (ac != 2)
		return (0);

	Convert	convert(av[1]);

	std::cout << "char: ";
	try {
		char c = static_cast<char>(convert);
		if (isprint(c))
			std::cout << '\'' << c << '\'';
		else
			std::cout << "Non displayable";
	}
	catch (std::exception) {
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "int: ";
	try {
		std::cout << static_cast<int>(convert);
	}
	catch (std::exception) {
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << std::fixed;
	std::cout.precision(1);

	std::cout << "float: ";
	try {
		std::cout << static_cast<float>(convert) << 'f';
	}
	catch (std::exception) {
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "double: ";
	try {
		std::cout << static_cast<double>(convert);
	}
	catch (std::exception) {
		std::cout << "impossible";
	}
	std::cout << std::endl;
}