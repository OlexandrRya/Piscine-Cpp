/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:51:44 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 14:06:20 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(std::string type) {
	setZombieType(type);
}

ZombieEvent::~ZombieEvent() {}


void		ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

std::string	ZombieEvent::getZombieType() const {
	return this->_type;
}

Zombie		*ZombieEvent::newZombie(std::string name) {
	Zombie *zombie = new Zombie(name, this->getZombieType());

	return zombie; 
}

Zombie		*ZombieEvent::randomChump()
{
	std::string names[10] = {"Katy", "Vill", "Zig", "Zara", "Juliam", "Simon", "Kiyi", "Putti", "Lower", "Zik"};

    Zombie *randZombie = this->newZombie(names[rand() % 10]);
	randZombie->announce();

	return randZombie;
}