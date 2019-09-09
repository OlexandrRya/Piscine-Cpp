/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:48:25 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/09 21:02:08 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int					main(void)
{
	Base			*b = generate();

	identify_from_pointer(b);
	identify_from_reference(*b);
	return (0);
}