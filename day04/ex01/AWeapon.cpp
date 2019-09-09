/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:16:54 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 11:53:44 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) {
    return ;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) {
    this->_damage = damage;
    this->_apcost = apcost;
    this->_name = name;
    return ;
}

AWeapon::AWeapon(const AWeapon &src) {
    *this = src;
    return ;
}

AWeapon::~AWeapon(void) {
    return ;
}

AWeapon &AWeapon::operator= (const AWeapon &src) {
    if (this != &src) {
        this->_apcost = src._apcost;
        this->_damage = src._damage;
        this->_name = src._name;
    }
    return (*this);
}

const std::string AWeapon::getName() const {
    return (this->_name);
}

int AWeapon::getAPCost(void) const {
    return (this->_apcost);
}

int AWeapon::getDamage(void) const {
    return (this->_damage);
}