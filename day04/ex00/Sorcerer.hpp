/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:46:02 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/04 20:59:44 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
    private:
        std::string  _name;
        std::string  _title;
        Sorcerer(void);

    public:
        Sorcerer(const Sorcerer &src);
        Sorcerer(std::string name, std::string title);
        ~Sorcerer(void);

        Sorcerer     &operator= (const Sorcerer &src);

        void         setName(std::string name);
        void         setTitle(std::string title);
        void         polymorph(Victim const &victim) const;
        void         polymorph(Peon const &peon) const;

        std::string  getName(void) const;
        std::string  getTitle(void) const;

};

std::ostream         &operator<< (std::ostream &out, const Sorcerer &src);

#endif