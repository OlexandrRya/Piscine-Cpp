/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:47:47 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 18:41:28 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon), _name(name) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
	std::cout << this->_name 
        << " attacks with his " 
        << _weapon.getType() 
        <<std::endl;
}
