/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:06:42 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 14:09:39 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {}

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
