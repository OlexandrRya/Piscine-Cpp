/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:45:56 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/04 21:04:29 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
    private:
        std::string _name;
        
    public:
        Peon(void);
        Peon(const Peon &src);
        Peon(std::string name);

        ~Peon(void);

        Peon        &operator= (const Peon &rhs);

        void getPolymorphed() const;
};

#endif