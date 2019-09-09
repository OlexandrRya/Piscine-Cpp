/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:26:20 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 15:56:22 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main(void) {
    Character *zaz = new Character("zaz");
    std::cout << *zaz;

    Enemy *b = new RadScorpion();
    Enemy *c = new RadScorpion();
    Enemy *d = new SuperMutant();

    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;

    zaz->attack(c);
    std::cout << *zaz;
    zaz->attack(c);
    std::cout << *zaz;
    zaz->attack(c);
    std::cout << *zaz;
    zaz->attack(c);
    std::cout << *zaz;
    zaz->attack(d);
    std::cout << *zaz;
    zaz->attack(d);
    std::cout << *zaz;
    zaz->attack(d);
    std::cout << *zaz;

    delete zaz;

    return (0);
}