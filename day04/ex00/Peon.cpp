/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:45:45 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/04 20:26:31 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) {
    this->_name = "Doomler";
    std::cout << "Zog zog." 
        << std::endl;
    return ;
}

Peon::Peon(std::string name) {
    this->_name = name;
    std::cout << "Zog zog." 
        << std::endl;
    return ;
}

Peon::Peon(const Peon &src) {
    *this = src;
    return ;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." 
        << std::endl;
    return ;
}

Peon &Peon::operator= (const Peon &rhs) {
    if (this != &rhs)
    {
        this->_name = rhs._name;
    }
    return (*this);
}

void Peon::getPolymorphed(void) const {
    std::cout << this->_name 
        << " has been turned into a pink pony !"
        << std::endl;
    return ;
}