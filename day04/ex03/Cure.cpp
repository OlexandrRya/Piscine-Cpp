/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:46:53 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 17:48:01 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
    return ;
}

Cure::Cure(const Cure &src) {
    *this = src;
    return ;
}

Cure::~Cure(void) {
    return ;
}

Cure &Cure::operator= (const Cure &rhs) {
    if (this != &rhs) {
        this->xp_ = rhs.xp_;
    }
    return (*this);
}

AMateria *Cure::clone(void) const {
    return (new Cure());
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " 
        << target.getName() 
        << "’s wounds *" 
        << std::endl;
    return ;
}
