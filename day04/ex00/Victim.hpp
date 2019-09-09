/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:45:51 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/04 21:06:30 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
    private:
        std::string   _name;

    public:
        Victim(void);
        Victim(const Victim &src);
        Victim(std::string name);
        virtual ~Victim(void);

        Victim        &operator= (const Victim &rhs);

        void          setName(std::string name);

        std::string   getName(void) const;
        void          getPolymorphed(void) const;

};

std::ostream          &operator<< (std::ostream &out, const Victim &rhs);

#endif