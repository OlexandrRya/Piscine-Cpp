/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:38:13 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 17:38:06 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <cstdlib>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad 
{
    public:
        Squad(void);
        Squad(const Squad &src);

        ~Squad(void);

        Squad   &operator= (const Squad &rhs);

        virtual int           getCount(void) const;
        virtual ISpaceMarine  *getUnit(int n) const;
        virtual int           push(ISpaceMarine *marine);

    private:
        typedef struct        s_container
        {
            ISpaceMarine          *unit;
            struct s_container    *next;
        }                     t_container;

        int                   _nbr_units;
        t_container           *_squad;

        void                  _copyUnits(const Squad &src);
        void                  _destroyUnits(void);
        bool                  _unitAlreadyIn(ISpaceMarine *marine, t_container *squad);
};

#endif