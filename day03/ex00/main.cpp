/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:28:31 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 14:01:45 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main() {
	srand(time(NULL));

	FragTrap			subject_one("Killer");
	FragTrap			subject_two("VunderVifla");
	FragTrap			subject_three = subject_two;
	const std::string	enemy = "BIG DATA";

	subject_one.rangedAttack(enemy);
	subject_two.meleeAttack(enemy);
	subject_three.takeDamage(50);
	std::cout << subject_three.getName() 
        << " has " 
        << subject_three.getHP()
		<< " hit points" 
        << std::endl;

	subject_three.takeDamage(60);
	std::cout << subject_three.getName() 
        << " has " 
        << subject_three.getHP()
		<< " hit points" 
        << std::endl;

	subject_three.beRepaired(42);
	std::cout << subject_three.getName() 
        << " has " 
        << subject_three.getHP()
		<< " hit points" 
        << std::endl;

	subject_three.beRepaired(10000);
	std::cout << subject_three.getName() 
        << " has "
        << subject_three.getHP()
		<< " hit points"
        << std::endl;

	int vaulthuntNum = 8;

	while (vaulthuntNum) {
		subject_three.vaulthunter_dot_exe(enemy);
		vaulthuntNum--;
	}

	return 0;
}