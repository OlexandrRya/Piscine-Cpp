/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:59:00 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 17:00:41 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine(void);
        TacticalMarine(const TacticalMarine &src);

        ~TacticalMarine(void);

        TacticalMarine    &operator= (const TacticalMarine &rhs);

        virtual void          battleCry(void) const;
        virtual void          rangedAttack(void) const;
        virtual void          meleeAttack(void) const;
        virtual ISpaceMarine  *clone(void) const;
};

#endif
