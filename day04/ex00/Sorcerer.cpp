/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:46:00 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/04 20:59:01 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
    this->_name = "Zevs";
    this->_title = "good of olimp";
    std::cout << this->_name 
        << ", " 
        << this->_title 
        << ", is born !" \
        << std::endl;

    return ;
}

Sorcerer::Sorcerer(const Sorcerer &src)
{
    *this = src;
    return ;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->_name = name;
    this->_title = title;
    std::cout << this->_name 
        << ", " 
        << this->_title 
        << ", is born !" \
        << std::endl;

    return ;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->_name 
        << ", " 
        << this->_title \
        << ", is dead. Consequences will never be the same !" \
        << std::endl;

    return ;
}

Sorcerer &Sorcerer::operator= (const Sorcerer &src)
{
    if (this != &src)
    {
      this->_name = src._name;
      this->_title = src._title;
    }
    return (*this);
}

std::ostream &operator<< (std::ostream &out, const Sorcerer &src)
{
    out << "I am " 
        << src.getName() 
        << ", " 
        << src.getTitle() \
        << ", and I like ponies ! " 
        << std::endl;

    return (out);
}

void Sorcerer::setName(std::string name)
{
    this->_name = name;
    return ;
}

void Sorcerer::setTitle(std::string title)
{
    this->_title = title;
    return ;
}

std::string Sorcerer::getName(void) const
{
    return (this->_name);
}

std::string Sorcerer::getTitle(void) const
{
    return (this->_title);
}

void Sorcerer::polymorph(const Victim &victim) const
{
    return (victim.getPolymorphed());
}

void Sorcerer::polymorph(const Peon &peon) const
{
    return (peon.getPolymorphed());
}