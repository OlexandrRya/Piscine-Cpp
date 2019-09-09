/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:09:24 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 14:13:37 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : PowerFist::AWeapon("Power Fist", 8, 50) {
    return ;
}

PowerFist::PowerFist(const PowerFist &src) {
    *this = src;
    return ;
}

PowerFist::~PowerFist(void) {
    return ;
}

PowerFist &PowerFist::operator= (const PowerFist &rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_apcost = rhs._apcost;
        this->_damage = rhs._damage;
    }
    return (*this);
}

void PowerFist::attack(void) const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}