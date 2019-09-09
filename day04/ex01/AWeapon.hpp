/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:17:11 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 13:19:20 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
    protected:
        int               _damage;
        int               _apcost;
        std::string       _name;

    public:
        AWeapon(void);
        AWeapon(const AWeapon &src);
        AWeapon(const std::string &name, int apcost, int damage);

        virtual           ~AWeapon(void);

        AWeapon           &operator= (const AWeapon &src);

        int               getAPCost(void) const;
        int               getDamage(void) const;
        const std::string getName(void) const;

        virtual void      attack(void) const = 0;
};

#endif