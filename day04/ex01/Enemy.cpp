/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:05:35 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 15:45:53 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {
    return ;
}

Enemy::Enemy(const Enemy &src) {
    *this = src;
    return ;
}

Enemy::Enemy(int hp, const std::string &type) {
    this->_hp = hp;
    this->_type = type;
    return ;
}

Enemy::~Enemy(void) {
    return ;
}

Enemy &Enemy::operator= (const Enemy &rhs) {
    if (this != &rhs) {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return (*this);
}

int Enemy::getHP(void) const {
    return (this->_hp);
}

const std::string Enemy::getType(void) const {
    return (this->_type);
}

void Enemy::takeDamage(int damage) {
    if (this->_hp - damage <= 0 && damage > 0) {
        this->_hp = 0;
    }
    else {
        this->_hp -= damage;
    }
    return ;
}
