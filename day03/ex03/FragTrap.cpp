/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:28:37 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 18:25:03 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define VAULTHUNTER_QUOTES	{\
	"assess the depth of human isolation from the human race !",\
	"if you think that someone else's life is more important than yours, then sign the donor card and commit suicide !",\
	"defragmenting !",\
	"people are tactful and polite, not because it is so accepted, but because they are aware of their imperfection and know that they can make mistakes !",\
    	"running the sequencer !",\
	"it's happening... it's happening !",\
	"it's about to get magical !",\
	"things are about to get awesome !",\
	"let's get this party started !",\
	"glitchy weirdness is term of endearment, right ?",\
	"oh god I can't stop !",\
	"it's the only way to stop the voices !",\
	"i am cloaking...",\
	"people may try to set you in the right direction, but they cannot point the way. You have to find it yourself !",\
	"aww, I shoulda drawn tattoos on it !",\
	"i'll tell you what all went ... but why the hell !",\
	"it's time to phase you suckers out !",\
	"tell me I'm the prettiest !",\
	"fly mini-trap ! Fly !",\
	"galloping across Europe !",\
	"punch 'em in the face, mini-trap !",\
	"ratattattattatta ! Powpowpowpow ! Powpowpowpow ! Pew-pew-pew !",\
	"score one for the turret-trap !",\
	"if for bad ideas they were given medals at the Olympics, this one would have taken gold.",\
	"you can call me Gundalf !",\
	"like those guys who made only one song ever.",\
	"love triangle.",\
	"one shot, make it count !",\
	"psychedellic man !",\
	"everybody, dance time ! Da-da-da-dun-daaa-da-da-da-dun-daaa !",\
	"the fact that theoretically an idea is justified does not make it less stupid !",\
	"i feel a joke about poop decks coming on !",\
}

FragTrap::FragTrap(std::string name) :	ClapTrap(name) {
	this->_armor = 5;
	std::cout << this->getName() 
        << ": Let's start a party!" 
        << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->getName() 
        << ": I died, oh my god, I died, bring me a pen and a notebook, i will make a last will!"
        << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
	std::cout << "[FragTrap] "
		<< src.getName() 
        << ": copying." 
        << std::endl;

	*this = src;
}

FragTrap &FragTrap::operator=(FragTrap const &src) {
	std::cout << src.getName() 
        <<": assignement operator called" 
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

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	const char *quotes[] = VAULTHUNTER_QUOTES;

	if (this->getEnergyPoints() < 25) {
		std::cout << this->getName() 
            << ": Do not have enough energy, stop and eat snickers\"." 
            << std::endl;
	}
	else {
		std::cout << this->getName() 
            << ": Hey " 
            << target << ", "\
			<< random_string(quotes, ARRAY_SIZE(quotes) - 1) 
            << std::endl;
		this->_energyPoints -= 25;
	}
}
