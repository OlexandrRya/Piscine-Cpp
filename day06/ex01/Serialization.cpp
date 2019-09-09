/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:05:12 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/09 20:37:38 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

void		*serialize(void)
{
    char				*str = new char[20];
	static const char	alphanum[] = 
		"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; ++i)
		str[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    str[8] = rand();
	str[8] = *(reinterpret_cast<int *>(&str[8]));
	for (int i = 12; i < 20; ++i)
		str[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	return (reinterpret_cast<void *>(str));
}

Data		*deserialize(void *raw)
{
	Data				*ret = new Data();

	ret->s1.assign(reinterpret_cast<char *>(raw), 8);
	ret->n = *reinterpret_cast<int *>(&reinterpret_cast<char *>(raw)[8]);
	ret->s2.assign(&reinterpret_cast<char *>(raw)[12], 8);
	return (ret);
}
