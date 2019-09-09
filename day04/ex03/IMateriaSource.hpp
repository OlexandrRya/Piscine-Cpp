/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:38:55 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 17:39:08 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIAL_SOURCE_HPP
# define IMATERIAL_SOURCE_HPP
# include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual             ~IMateriaSource(void) { return ; }

        virtual AMateria    *createMateria(std::string const & type) = 0;
        virtual void        learnMateria(AMateria*) = 0;
};

#endif