/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:46:40 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 21:23:48 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap() {
	this->_name = "Default_NinjaTrap";
	this->_maxHP = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 5;
	this->_armor = 0;
	std::cout << "[NinjaTrap]: default creation!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	this->_HP = 60;
	this->_maxHP = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 5;
	this->_armor = 0;

	std::cout << "[NinjaTrap] " 
		<< this->getName() 
		<< " : I`m vampire ! Rawr." 
		<< std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "[NinjaTrap] " 
		<< this->getName() 
		<< " : I kill my self!!!" 
		<< std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &inst) : ClapTrap(inst) {
	std::cout << "[NinjaTrap] " 
		<< inst.getName() 
		<< " : copping." 
		<< std::endl;
	*this = inst;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &inst) {
	std::cout << inst.getName() 
		<<" : assignement operator called" 
		<< std::endl;

	this->_name = inst.getName();
	this->_HP = inst.getHP();
	this->_maxHP = inst.getMaxHP();
	this->_energyPoints = inst.getEnergyPoints();
	this->_maxEnergyPoints = inst.getMaxEnergyPoints();
	this->_level = inst.getLevel();
	this->_meleeDamage = inst.getMeleeDamage();
	this->_rangedDamage = inst.getRangedDamage();
	this->_armor = inst.getArmor();

	return *this;
}

void NinjaTrap::ninjaShoebox(ClapTrap &obj) {
	std::cout << "[to ClapTrap] Hey, " 
		<< obj.getName()
		<< "! Why are you crying baby?" 
		<< std::endl;
	std::cout << "It said concentrate! Hee hee hee hee." 
		<< std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &obj) {
	std::cout << "[to FragTrap] Hey, " 
		<< obj.getName()
		<< "! your tears are so big?" 
		<< std::endl;
	std::cout << "Is it all because I hit you?! Hee hee hee hee." 
		<< std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &obj) {
	std::cout << "[to ScavTrap] Hey, " 
		<< obj.getName()
		<< "! Your back is green!" 
		<< std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &obj) {
	std::cout << "[to NinjaTrap] Hey, " 
		<< obj.getName()
		<< "! You must retire from this place!" 
		<< std::endl;
}