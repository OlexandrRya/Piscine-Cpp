/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:15:35 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 14:17:29 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : RadScorpion::Enemy(80, "RadScorpion") {
    std::cout << "* click click click *" 
        << std::endl;
    return ;
}

RadScorpion::RadScorpion(const RadScorpion &src) {
    *this = src;
    return ;
}

RadScorpion::~RadScorpion(void) {
    std::cout << "* SPROTCH *" 
        << std::endl;
    return ;
}

RadScorpion &RadScorpion::operator= (const RadScorpion &rhs) {
    if (this != &rhs) {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return (*this);
}