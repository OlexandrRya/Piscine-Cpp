/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:15:33 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 18:34:59 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define SCAVTRAP_CHALLENGING_QUOTES	{\
	"Troll fix enemy !",\
	"Show true !",\
	"Baby cry !",\
	"I will kill you !",\
	"UNIT Lets go !"\
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
											
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeDamage = 20;
	this->_rangedDamage = 12;
	std::cout << this->getName() 
		<< " : check out my enemies about the great macaroni monster!" 
		<< std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->getName() 
		<< " : Dead, i`m dead good by..." 
		<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
	std::cout << src.getName() 
		<< " : copying." 
		<< std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
	std::cout << src.getName() 
		<<" : assignement operator called" 
		<< std::endl;

	this->_name = src.getName();
	this->_HP = src.getHP();
	this->_maxHP = src.getMaxHP();
	this->_energyPoints = src.getEnergyPoints();
	this->_maxEnergyPoints = src.getMaxEnergyPoints();
	this->_level = src.getLevel();
	this->_meleeDamage = src.getMeleeDamage();
	this->_rangedDamage = src.getRangedDamage();
	this->_armor = src.getArmor();

	return *this;
}

void ScavTrap::challengeNewcomer(std::string const &target) {
	const char *quotes[] = SCAVTRAP_CHALLENGING_QUOTES;

	if (this->getEnergyPoints() < 25)
		std::cout << this->getName() 
            << ": not enough energy you mast eat some egs?" 
            << std::endl;
	else {
		std::cout << this->getName() 
            << ": Hey " 
            << target 
            << ", "\
            << random_string(quotes, ARRAY_SIZE(quotes) - 1) 
            << std::endl;

		this->_energyPoints -= 25;
	}
}
