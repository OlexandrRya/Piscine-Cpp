/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:31:01 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 12:57:31 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::get_line(std::string param, std::string *str_from_input) {
	std::cout << "Please enter " << param << ":" << std::endl;
	if (!(std::getline (std::cin, *str_from_input)))
		exit(-1);		
}

void	PhoneBook::print_all_contact(void) {
	std::cout << "|         " << index << "|";
	std::cout << make_output(first_name) << "|";
	std::cout << make_output(last_name) << "|"; 
	std::cout << make_output(nickname) << "|" << std::endl;
}

std::string PhoneBook::make_output(std::string input) {

	std::string str;

	if(input.length() < 10) {
		std::string str1 (10 - input.length(), ' ');
		str = str1 + input;
		return(str);
	}
	if(input.length() > 10) {
		std::string str = input.substr(0,9);
		str = str + '.';
		return(str);
	}
	return(input);
}

void	PhoneBook::create_contact(int count) {
	index = count;

	get_line("first name", &first_name);
	get_line("last name", &last_name);
	get_line("nick name", &nickname);
	get_line("login", &login);
	get_line("postal address", &postal_address);
	get_line("email address", &email_address);
	get_line("phone number", &phone_number);
	get_line("birthday date", &birthday_date);
	get_line("favorite meal", &favorite_meal);
	get_line("underwear color", &underwear_color);
	get_line("darkest secret", &darkest_secret);
};
