/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:58:38 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 17:00:14 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : _brain() {}

Human::~Human() {}

std::string Human::identify() const {
    return this->getBrain().identify();
}

Brain const &Human::getBrain() const {
    return this->_brain;
}
