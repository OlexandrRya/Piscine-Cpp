/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:45:25 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/09 20:52:14 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void){}

A::A(A const &src)
{
	*this = src;
}

A::~A(void){}

A   &A::operator=(A const &src){
	(void)src;
	return (*this);
}

