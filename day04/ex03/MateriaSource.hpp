/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:05:34 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 18:07:40 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria            *_inventory[4];
        int                 _n_index;

    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &src);
        ~MateriaSource(void);

        MateriaSource       &operator= (const MateriaSource &rhs);

        virtual void        learnMateria(AMateria *m);
        virtual AMateria    *createMateria(const std::string &type);
};

#endif