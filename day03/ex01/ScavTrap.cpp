/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:15:33 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 18:28:37 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define MAX(x,y)		((x > y) ? (x) : (y))
#define MIN(x,y)		((x < y) ? (x) : (y))
#define ARRAY_SIZE(a)	(sizeof(a) / sizeof(*a))
#define SCAVTRAP_CHALLENGING_QUOTES	{\
	"Troll fix enemy !",\
	"Show true !",\
	"Baby cry !",\
	"I will kill you !",\
	"UNIT Lets go !"\
}

static std::string random_string(const char **array, size_t size) {
	return array[rand() & size];
}

ScavTrap::ScavTrap(std::string name) :  _name(name),
										_level(1),
										_meleeDamage(30),
										_rangedDamage(20),
										_armor(5),
										_HP(100),
										_maxHP(100),
										_energyPoints(100),
										_maxEnergyPoints(100) {
	std::cout << this->getName() 
		<< " : check out my enemies about the great macaroni monster!" 
		<< std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->getName() 
		<< " : Dead, i`m dead^ good by..." 
		<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
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

void ScavTrap::takeDamage(unsigned int amount) {
	amount = (this->getArmor() > amount) ? 0 : (amount - this->getArmor());
	if (amount > this->getHP())
		amount = this->getHP();

	std::cout << this->getName() 
        << " takes " 
        << amount 
        << " points of damage" 
        << std::endl;

	this->_HP -= amount;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << this->getName() 
        << " repaired for " 
        << amount 
        << " hit points" 
        << std::endl;
	this->_HP = MIN(this->getMaxHP(), this->getHP() + amount);
}

void ScavTrap::rangedAttack(std::string const &target) const {
	std::cout << "FR4G-TP " 
        << this->getName() 
        << " attacks " 
        << target;

	std::cout << " at range, causing " 
        << this->getRangedDamage() 
        << " points of damage !" 
        << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) const {
	std::cout << "FR4G-TP " 
        << this->getName() 
        << " attacks " 
        << target;

	std::cout << " with melee, causing " 
        << this->getMeleeDamage() 
        << " points of damage !" 
        << std::endl;
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

std::string	ScavTrap::getName() const {
	return this->_name;
}

unsigned int ScavTrap::getMaxHP() const {
	return this->_maxHP;
}

unsigned int ScavTrap::getLevel() const {
	return this->_level;
}

unsigned int ScavTrap::getMeleeDamage() const {
	return this->_meleeDamage;
}

unsigned int ScavTrap::getRangedDamage() const {
	return this->_rangedDamage;
}

unsigned int ScavTrap::getArmor() const {
	return this->_armor;
}

unsigned int ScavTrap::getHP() const {
	return this->_HP;
}

unsigned int ScavTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

unsigned int ScavTrap::getMaxEnergyPoints() const {
	return this->_maxEnergyPoints;
}
