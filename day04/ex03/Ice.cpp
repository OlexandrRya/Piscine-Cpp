/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:44:36 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 17:45:03 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
    return ;
}

Ice::Ice(const Ice &src) {
    *this = src;
    return ;
}

Ice::~Ice(void) {
    return ;
}

Ice
&Ice::operator= (const Ice &rhs) {
    if (this != &rhs)
    {
        this->xp_ = rhs.xp_;
    }
    return (*this);
}

AMateria *Ice::clone(void) const {
    return (new Ice());
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " 
        << target.getName() 
        << " *" 
        << std::endl;
    return ;
}