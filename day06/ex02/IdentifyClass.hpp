/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IdentifyClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:47:57 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/10 09:44:03 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_H
# define IDENTIFY_H
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include "Base.hpp"

Base			*generate(void);
void			identify_from_pointer(Base *p);
void			identify_from_reference(Base &p);

#endif