/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:29:03 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 14:29:21 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant(void);
        SuperMutant(const SuperMutant &src);

        ~SuperMutant(void);

        SuperMutant   &operator= (const SuperMutant &rhs);

        virtual void  takeDamage(int damage);
};

#endif
