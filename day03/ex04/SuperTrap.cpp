/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 20:02:09 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 22:07:10 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"


SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap() {
	this->_name = "default_SuperTrap";
	this->_HP = 100;
	this->_maxHP = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeDamage = 60;
	this->_rangedDamage = 20;
	this->_armor = 5;
	std::cout << "[SuperTrap] " 
		<< this->getName() 
		<< " : default creation" 
		<< std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->_HP = 100;
	this->_maxHP = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeDamage = 60;
	this->_rangedDamage = 20;
	this->_armor = 5;
	std::cout << "[SuperTrap] " << this->getName() << " : recompiling my combat code!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src) : ClapTrap(src), FragTrap(src), NinjaTrap(src) {
	std::cout << "[SuperTrap] " << src.getName() << " : duplication." << std::endl;
	*this = src;
}

SuperTrap::~SuperTrap() {
	std::cout << "[SuperTrap] " << this->getName() << " : SuperTrap - SuperDeath" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &src) {
	std::cout << "[SuperTrap] " << src.getName() <<" : assignement operator called" << std::endl;
	ClapTrap::operator=(src);

	return *this;
}

void SuperTrap::meleeAttack(std::string const &target) const {
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const &target) const {
	FragTrap::rangedAttack(target);
}