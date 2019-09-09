/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:59:11 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 17:01:26 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return ;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src) {
    *this = src;
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return ;
}


TacticalMarine::~TacticalMarine(void) {
    std::cout << "Aaargh ..." << std::endl;
    return ;
}


TacticalMarine &TacticalMarine::operator= (const TacticalMarine &rhs) {
	(void)rhs;
	return (*this);
}


void TacticalMarine::battleCry(void) const {
    std::cout << "For the holy PLOT !" << std::endl;
    return ;
}

void TacticalMarine::meleeAttack(void) const {
    std::cout << "* attacks with chainsword *" << std::endl;
    return ;
}

void TacticalMarine::rangedAttack(void) const {
    std::cout << "* attacks with bolter *" << std::endl;
    return ;
}

ISpaceMarine *TacticalMarine::clone(void) const {
    return (new TacticalMarine);
}