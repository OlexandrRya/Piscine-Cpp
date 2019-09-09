/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IdentifyClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:48:01 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/10 09:43:58 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IdentifyClass.hpp"

Base			*generate(void) {
	static bool		random_set;
	int				random;

	if (!random_set) {
		std::srand(std::time(NULL));
		random_set = true;
	}

	random = std::rand() % 3;
	if (random == 0)
		return (static_cast<Base *>(new A()));
	else if (random == 1)
		return (static_cast<Base *>(new B()));
	else
		return (static_cast<Base *>(new C()));
}

void			identify_from_pointer(Base *p) {
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void			identify_from_reference(Base &p) {
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &e) {
		try {
			(void)dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &e) {
			try {
				(void)dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast &e) {}
		}
	}
}