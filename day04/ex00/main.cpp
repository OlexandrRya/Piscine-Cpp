/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:45:53 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/04 21:11:10 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"

int
main(void)
{
    std::cout << "~~ Declarations ~~" 
        << std::endl;
    Sorcerer  robert("Robert", "the Magnificent");
    Victim    jim("Jimmy");
    Peon      joe("Joe");

    std::cout << std::endl;

    std::cout << robert 
        << jim 
        << joe 
        << std::endl;

    robert.polymorph(jim);
    robert.polymorph(joe);
    std::cout << std::endl;

    return (0);
}