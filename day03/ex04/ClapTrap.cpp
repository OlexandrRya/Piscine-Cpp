/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:47:04 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 21:39:54 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :	_name("Default_ClapTrap"),
			_level(1),
			_meleeDamage(30),
			_rangedDamage(20),
			_armor(3),
			_HP(100),
			_maxHP(100),
			_energyPoints(100),
			_maxEnergyPoints(100) {
	std::cout << "[ClapTrap]: default creation!" 
		<< std::endl;
}

ClapTrap::ClapTrap(std::string name) :	_name(name),
					_level(1),
					_meleeDamage(30),
					_rangedDamage(20),
					_armor(3),
					_HP(100),
					_maxHP(100),
					_energyPoints(100),
					_maxEnergyPoints(100) {
	std::cout << "[ClapTrap] " 
		<< this->getName()
		<< " : creation!" 
		<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "[ClapTrap] " 
        << src.getName() 
        << " : duplication." 
        << std::endl;

	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "[ClapTrap] " 
        << this->getName() 
        << " : death!" 
        << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src) {
	std::cout << src.getName() 
        << " : assignement operator called" 
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

void ClapTrap::takeDamage(unsigned int amount) {
	amount = (this->getArmor() > amount) ? 0 : (amount - this->getArmor());
	if (amount > this->getHP())
		amount = this->getHP();

	std::cout << this->getName() << " takes " << amount << " points of damage" << std::endl;

	this->_HP -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->getName() 
        << " repaired for " 
        << amount 
        << " hit points" 
        << std::endl;

	this->_HP = MIN(this->getMaxHP(), this->getHP() + amount);
}

void ClapTrap::rangedAttack(std::string const &target) const {
	std::cout << this->getName() 
        << " attacks " 
        << target;

	std::cout << " at range, causing " 
        << this->getRangedDamage() 
        << " points of damage !" 
        << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) const {
	std::cout << this->getName() 
        << " attacks " 
        << target;

	std::cout << " with melee, causing " 
        << this->getMeleeDamage() 
        << " points of damage !" << std::endl;
}

std::string	ClapTrap::getName() const {
	return this->_name;
}

unsigned int ClapTrap::getHP() const {
	return this->_HP;
}

unsigned int ClapTrap::getMaxHP() const {
	return this->_maxHP;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

unsigned int ClapTrap::getMaxEnergyPoints() const {
	return this->_maxEnergyPoints;
}

unsigned int ClapTrap::getLevel() const {
	return this->_level;
}

unsigned int ClapTrap::getMeleeDamage() const{
	return this->_meleeDamage;
}

unsigned int ClapTrap::getRangedDamage() const{
	return this->_rangedDamage;
}

unsigned int ClapTrap::getArmor() const {
	return this->_armor;
}

std::string random_string(const char **array, size_t size) {
	return array[rand() & size];
}