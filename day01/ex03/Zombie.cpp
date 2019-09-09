/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:27:22 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 15:22:55 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {}

void Zombie::announce() const {
	std::cout << this->getName() << " : " 
    << this->getType() 
    << " : Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::getType() const {
	return this->_type;
}

std::string Zombie::getName() const {
	return this->_name;
}

void Zombie::setType(std::string type) {
	this->_type = type;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}
