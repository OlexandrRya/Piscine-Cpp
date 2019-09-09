/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:45:14 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/09 20:54:49 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP
# include "Base.hpp"

class B: public Base
{
	public:
    B(void);
    ~B(void);
    B(B const &src);
    B	&operator=(B const &rhs);
};

#endif
