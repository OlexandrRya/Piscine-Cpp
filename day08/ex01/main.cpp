/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 11:12:38 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/10 11:18:15 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int				main(void) {
	Span				first(1);
	Span				second(50000);
	std::vector<int>	source1;
	std::vector<int>	source2(46000);

	std::cout << "Trying to push 1 value in a Span of 1 value: ";
	try {
		first.addNumber(42);
		std::cout << "Success" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (not expected): " << e.what() << std::endl;
	}

	std::cout << "Trying to push 1 more value in the same Span: ";
	try {
		first.addNumber(42);
		std::cout << "Success, but that was not expected" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (Span full expected): " << e.what() << std::endl;
	}

	second.addNumber(100);
	second.addNumber(200);
	second.addNumber(300);
	second.addNumber(400);

	std::cout << "With values from 100 to 400" << std::endl;
	std::cout << "Min: " << second.shortestSpan() << std::endl;
	std::cout << "Max: " << second.longestSpan() << std::endl;

	for (int i = 42; i <= 4242; i++)
		source1.push_back(i);
	second.addNumber(source1.begin(), source1.end());

	std::cout << "With values from 42 to 4242" << std::endl;
	std::cout << "Min: " << second.shortestSpan() << std::endl;
	std::cout << "Max: " << second.longestSpan() << std::endl;

	std::cout << "Trying to push 46000 more values in a Span of 50000 values: ";
	try {
		second.addNumber(source2.begin(), source2.end());
		std::cout << "Success, but that was not expected" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (Span full expected): " << e.what() << std::endl;
	}
	return (0);
}