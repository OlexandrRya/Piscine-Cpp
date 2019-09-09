/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:48:14 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 16:49:53 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Brain.hpp"

Brain::Brain() {
	setAddress();
}

Brain::~Brain() {}

std::string Brain::getAddress(void) const {
	return this->_address;
}

std::string Brain::identify() const {
	return this->getAddress();
}

void Brain::setAddress() {
	std::stringstream buff;

	buff << this;
	this->_address = buff.str();
}
