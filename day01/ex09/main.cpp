/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:37:29 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 19:55:48 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main() {
	Logger logger("log_file");

	logger.log("console", "log to console.");
	logger.log("file", "log to file.");

	return 0;
}
