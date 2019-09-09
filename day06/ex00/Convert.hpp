/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:55:35 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/09 15:26:34 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "errno.h"

class Convert
{
    private:
        std::string     _string;
    public:
        class   NoConversionException: public std::exception
        {
            public:
                            NoConversionException(void);
                            ~NoConversionException(void) throw();
                char const  *what(void) const throw();
        };
                Convert(std::string const &string);
                ~Convert(void);
                Convert(Convert const &src);
                Convert &operator= (Convert const &src);
                operator std::string const &(void) const;
                operator char(void) const;
                operator int(void) const;
                operator float(void) const;
                operator double(void) const;
};

std::ostream    &operator<< (std::ostream &os, Convert const &typeString);

#endif