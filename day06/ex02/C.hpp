/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:48:07 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/09 20:55:55 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_H
# define C_H

# include "Base.hpp"

class C: public Base
{
	public:
    C(void);
    ~C(void);
    C(C const &src);
    C   &operator=(C const &src);
};

#endif
