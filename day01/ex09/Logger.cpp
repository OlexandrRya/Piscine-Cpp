/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:37:36 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 19:54:29 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string name): _name(name) {}

Logger::~Logger() {}

void Logger::logToConsole(std::string str) const {
 	std::cout << str 
        << std::endl;
}

void Logger::logToFile(std::string str) const {
	std::fstream fileStream(this->_name.c_str(), std::ios::out | std::ios::app);
	fileStream << str 
        << std::endl;
}

std::string Logger::makeLogEntry(std::string const &message) const {
	std::stringstream outStream;

	time_t t = time(0);
	struct tm  *nowTimestamp = localtime(&t);

	outStream << '[' << (nowTimestamp->tm_year + 1900)
			<< std::setw(2) << std::setfill('0') 
                << (nowTimestamp->tm_mon + 1)
			<< std::setw(2) << std::setfill('0') 
                << nowTimestamp->tm_mday
			<< '_'
			<< std::setw(2) << std::setfill('0') 
                << nowTimestamp->tm_hour
			<< std::setw(2) << std::setfill('0') 
                << nowTimestamp->tm_min
			<< std::setw(2) << std::setfill('0') 
                << nowTimestamp->tm_sec 
            << "]: ";

	return outStream.str() + message;
}

void Logger::log(std::string const &dest, std::string const &message) const {
	void (Logger::*destFunction[])(std::string s) const = {
		&Logger::logToConsole,
		&Logger::logToFile
	};

	std::string dests[] = {
		"console",
		"file"
	};

	for (int i = 0; i < 2; ++i) {
		if (dest == dests[i])
			(this->*destFunction[i])(makeLogEntry(message));
	}
}