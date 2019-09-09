/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:34:52 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 16:33:50 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int numZombies): _numZombies(numZombies) {
	this->_zombies = new Zombie[numZombies];

	for (int i = 0; i < this->_numZombies; i++) {
		this->_zombies[i].setName(this->getRandomZombieName());
		this->_zombies[i].setType("Zombie");
	}
	std::cout << "Heelp! Zombie is here!" << std::endl;
}

ZombieHorde::~ZombieHorde() {
	std::cout << "Zombie is gone!" << std::endl;
	delete [] this->_zombies;
}

void ZombieHorde::announce() const {
	for (int i = 0; i < this->_numZombies; i++) {
		this->_zombies[i].announce();
	}
}

std::string ZombieHorde::getRandomZombieName() {
    std::string names[10] = {"Katy", "Vill", "Zig", "Zara", "Juliam", "Simon", "Kiyi", "Putti", "Lower", "Zik"};

    return names[rand() % 10];
}
