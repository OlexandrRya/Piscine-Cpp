/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:42:26 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/01 14:10:06 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	capitalize(char *str) {

	for (int i = 0; str[i] != '\0'; i++) {
		std::cout << static_cast<char>(toupper(str[i]));
	}
}

int		main(int argc, char **argv) {

    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }

	for (int i = 1; i <= argc - 1; i++) {
		capitalize(argv[i]);
	}
    
	std::cout << std::endl;
	return (0);
}
