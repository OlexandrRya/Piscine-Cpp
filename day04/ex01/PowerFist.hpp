/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:09:33 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 14:13:22 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist(void);
        PowerFist(const PowerFist &src);

        ~PowerFist(void);

        PowerFist     &operator= (const PowerFist &rhs);

        virtual void  attack(void) const;
};

#endif