/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:17:33 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 14:05:48 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
    return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src) {
    *this = src;
    return ;
}

PlasmaRifle::~PlasmaRifle(void) {
    return ;
}

PlasmaRifle &PlasmaRifle::operator= (const PlasmaRifle &rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_apcost = rhs._apcost;
        this->_damage = rhs._damage;
    }
    return (*this);
}

void PlasmaRifle::attack(void) const {
    std::cout << "* piouuu piouuu piouuu *" 
        << std::endl;
    return ;
}