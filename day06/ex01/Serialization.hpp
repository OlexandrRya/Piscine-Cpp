/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:05:09 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/09 17:12:11 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>
# include <time.h>
# include <stdlib.h>

struct Data
{
	std::string		s1;
	std::string		s2;
	int				n;    
};

void		*serialize(void);
Data		*deserialize(void *raw);

#endif