/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:42:45 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/09 20:39:01 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int			main(void)
{
	srand(time(NULL));
	void		*buff = serialize();
	Data		*raw = deserialize(buff);

	std::cout	<< raw->s1
				<< raw->n
				<< raw->s2
				<< std::endl;
	return 0;
}
