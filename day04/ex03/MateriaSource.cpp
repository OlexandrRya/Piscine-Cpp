/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:05:44 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 18:11:28 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    this->_n_index = 0;
    for (int i = 0; i < 4; i += 1) {
        this->_inventory[i] = NULL;
    }
    return ;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
    *this = src;
    return ;
}

MateriaSource::~MateriaSource(void) {
    return ;
}

MateriaSource &MateriaSource::operator= (const MateriaSource &rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 4; i += 1) {
            this->_inventory[i] = NULL;
            this->_inventory[i] = rhs._inventory[0]->clone();
        }
        this->_n_index = rhs._n_index;
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
    if (this->_n_index < 3) {
        this->_inventory[this->_n_index] = m;
        this->_n_index += 1;
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    if (type == "ice") {
        return (new Ice());
    }
    else if (type == "cure") {
        return (new Cure());
    }
    return (NULL);
}
