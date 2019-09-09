/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:16:24 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 12:56:56 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string command;
	PhoneBook	contacts[8];

	for (int i = 0; i < 8 + 1;)
	{
		std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
		if (!(std::getline(std::cin, command)))
			return (0);
		switch (PhoneBook::switch_command(command))
		{
			case 0: {
				if (i < 8) {
					contacts[i].create_contact(i);
					i++;
				} else {
					std::cout << "Too many contacts, maximum number of contacts 8!" << std::endl;
				}
				break;
			}
			case 1: {
				break;				
			}
			case 2: {
				std::cout << "|     index|" << "first name|" << " last name|" << "  nickname|" << std::endl;
				for (int j = 0; j < i; j++) {
					contacts[j].print_all_contact();
				}
				std::cout << "Enter index you want to leave:" << std::endl;
				if (!(std::getline(std::cin, command)))
					return (0);
				int k = atoi(command.c_str());
				if (k < 0 || k > i)
					std::cout << "You entered invalid index" << std::endl;
				else {
					std::cout << "|     index|" << "first name|" << " last name|" << "  nickname|" << std::endl;
					contacts[k].print_all_contact();
				}
				break;
			}
			default: {
				std::cout << "Please enter a valid command" << std::endl;
				break;
			}
		}
	}
	return 0;
}