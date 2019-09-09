/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:55:38 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/09 15:29:18 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string const &data) {
    this->_string = data;
}

Convert::Convert(Convert const &src) {
    (*this) = src;
}

Convert::~Convert(void) {}

Convert &Convert::operator= (Convert const &src) {
    this->_string = src._string;
    return (*this);
}

Convert::operator std::string const &(void) const
{
	return (this->_string);
}

Convert::operator char(void) const
{
	char	tmp = static_cast<char>(std::atoi(this->_string.c_str()));
	if (errno)
		throw (NoConversionException());
	return (tmp);
}

Convert::operator int(void) const
{
	int		tmp = std::atoi(this->_string.c_str());
	if (errno)
		throw (NoConversionException());
	return (tmp);
}

Convert::operator float(void) const
{
	char	tmp = std::atof(this->_string.c_str());
	if (errno)
		throw (NoConversionException());
	return (tmp);
}

Convert::operator double(void) const
{
	char	tmp = std::strtod(this->_string.c_str(), NULL);
	if (errno)
		throw (NoConversionException());
	return (tmp);
}

std::ostream				&operator<<(std::ostream &os, Convert const &convert)
{
	os << static_cast<std::string const &>(convert);
	return (os);
}

Convert::NoConversionException::NoConversionException(void) {}
Convert::NoConversionException::~NoConversionException(void) throw() {}
char const  *Convert::NoConversionException::what(void) const throw()
{
	return ("No conversion");
}