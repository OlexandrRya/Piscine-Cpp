/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:27:21 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 13:00:55 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat bur("Vitalia", 100);

    try {
        for (int i = 1; i< 10; i++) {
            bur.setGrade(i);
            std::cout << bur << std::endl;
        }
        std::cout << std::endl;
            bur.setGrade(145);
        for (int i = 140; i < 160; i++) {
            bur.incrementGrade();
            std::cout << bur <<std::endl;
        }

        std::cout << std::endl;
            bur.setGrade(5);
        for (int i = 5; i >= 0; i--) {
            bur.decrementGrade();
            std::cout << bur <<std::endl;
        }
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}