/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:39:59 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 16:46:24 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include "ISpaceMarine.hpp"

class ISquad
{
    public:
        virtual ~ISquad(void) { return ; }

        virtual int           push(ISpaceMarine *marine) = 0;
        virtual int           getCount(void) const = 0;
        virtual ISpaceMarine  *getUnit(int n) const = 0;
};

#endif
