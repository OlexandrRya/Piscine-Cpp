/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:37:33 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 19:40:35 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_H
# define LOGGER_H
# include <iostream>
# include <fstream>
# include <sstream>
# include <iomanip>

class Logger {
    private:
		std::string _name;

		void logToConsole(std::string s) const;
		void logToFile(std::string s) const;
		std::string makeLogEntry(std::string const & message) const;

	public:
		Logger(std::string name);
		~Logger();

		void log(std::string const & dest, std::string const & message) const;
};

#endif