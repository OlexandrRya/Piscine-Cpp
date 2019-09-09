/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:40:44 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 18:04:37 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(void);
        Character(const Character &src);
        Character(const std::string &name);

        ~Character(void);

        Character                   &operator= (const Character &rhs);

        virtual void                unequip(int idx);
        virtual void                equip(AMateria* m);
        virtual void                use(int idx, ICharacter& target);
        virtual const std::string   &getName() const;

    private:
        std::string                 _name;
        AMateria*                   _inventory[4];
        int                         _n_index;
};

#endif
