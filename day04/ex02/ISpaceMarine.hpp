/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:40:32 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 16:44:02 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
    public:
        virtual               ~ISpaceMarine(void) { return ; }

        virtual void          meleeAttack(void) const = 0;
        virtual void          battleCry(void) const = 0;
        virtual void          rangedAttack(void) const = 0;
        virtual ISpaceMarine  *clone(void) const = 0;
};

#endif