/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:31:05 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 12:58:23 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cctype>
# include <string>

class PhoneBook
{
    private:
        int 		index;
        std::string	first_name;
        std::string	last_name;
        std::string	nickname;
        std::string	login;
        std::string	postal_address;
        std::string	phone_number;
        std::string	email_address;
        std::string	birthday_date;
        std::string	favorite_meal;
        std::string	underwear_color;
        std::string	darkest_secret;

    public:
        std::string make_output(std::string input);
        void	create_contact(int count);
        void	print_all_contact(void);
        void	get_line(std::string param, std::string *str_from_input);
        static int switch_command(std::string command) {
            if (!command.compare("ADD")) {
                return 0;
            } else if (!command.compare("EXIT")) {
                return 1;
            } else if (!command.compare("SEARCH")) {
                return 2;
            }
            return 3;
        }
};

#endif
