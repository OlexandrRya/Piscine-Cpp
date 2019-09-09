/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:28:31 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 21:38:51 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

static void	ScavTrapTest() {
	std::cout << "TEST ScavTrap: " 
		<< std::endl 
		<< std::endl;
	ScavTrap			subject_one("Less");
	ScavTrap			subject_two("Zevs");
	ScavTrap			subject_three = subject_two;
	const std::string	enemy = "Another Fat Ass";

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

	size_t number_of_challengers = 8;

	while (number_of_challengers) {
		subject_three.challengeNewcomer(enemy);
		number_of_challengers--;
	}
}

static void	FragTrapTest() {
	std::cout << "TEST FragTrap: " 
		<< std::endl 
		<< std::endl;
	FragTrap			subject_one("Killer");
	FragTrap			subject_two("VunderVifla");
	FragTrap			subject_three = subject_two;
	const std::string	enemy = "Fat Ass";

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
}

static void	NinjaTrapTest() {
	std::cout << "Testing NinjaTrap: " 
		<< std::endl 
		<< std::endl;

	NinjaTrap n1("Ninja");
	ClapTrap c1("Clap");
	FragTrap f1("Frag");
	ScavTrap s1("Scav");
	NinjaTrap n2("Ninja2");

	n1.ninjaShoebox(c1);
	n1.ninjaShoebox(f1);
	n1.ninjaShoebox(s1);
	n1.ninjaShoebox(n2);
}

static void	SuperTrapTest() {
	std::cout << "Testing SuperTrap: " << std::endl << std::endl;
	SuperTrap ss1("arybak");
	SuperTrap ssCopy = ss1;
	const std::string enemy = "lampochka";

	ss1.rangedAttack(enemy);
	ss1.meleeAttack(enemy);
}


int main() {
	srand(time(NULL));

	FragTrapTest();
	std::cout << "============================================" 
		<< std::endl;
	ScavTrapTest();
	std::cout << "============================================" 
		<< std::endl;
	NinjaTrapTest();
	std::cout << "============================================" 
		<< std::endl;
	SuperTrapTest();

	return 0;
}