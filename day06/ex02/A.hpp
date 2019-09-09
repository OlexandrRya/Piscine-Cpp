/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:45:20 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/09 20:52:31 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP
# include "Base.hpp"

class A: public Base
{
	public:
    A(void);
    ~A(void);
    A(A const &src);
    A	&operator=(A const &rhs);
};

#endif