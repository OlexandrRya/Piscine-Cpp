/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:24:58 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 13:28:57 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>


Pony::Pony(std::string name, std::string color) : _name(name), _color(color) {
	std::cout << this->getName() << " constructed! It is " << this->getColor() << std::endl;
}

Pony::~Pony() {
	std::cout << this->getName() << " destroyed!" << std::endl;
}

std::string Pony::getName() const {
	return this->_name;
}

std::string Pony::getColor() const {
	return this->_color;
}

void	Pony::say_hi() const {
	std::cout << "Hello from " << this->getName() << std::endl;
}