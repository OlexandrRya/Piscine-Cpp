/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:18:37 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 19:33:04 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::action(std::string const &action_name, std::string const &targetFunction) {
	void (Human::*funcs[])(std::string const & targetFunction) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	std::string actions[] = {
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};

	for (int i = 0; i < 3; i++) {
		if (action_name == actions[i])
			(this->*funcs[i])(targetFunction);
	}
}

void Human::intimidatingShout(std::string const & target) {
	std::cout <<  "[-] intimidatingShout to " + target 
        << std::endl;
}

void Human::rangedAttack(std::string const & target) {
	std::cout <<  "[-] rangedAttack to " + target 
        << std::endl;
}

void Human::meleeAttack(std::string const & target) {
	std::cout <<  "[-] meleeAttack to " + target 
        << std::endl;
}
