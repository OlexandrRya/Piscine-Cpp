/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:52:27 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 15:58:35 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void    tryToSignForm1(Bureaucrat b, ShrubberyCreationForm f) {
    try {
        b.signForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    tryToSignForm2(Bureaucrat b, RobotomyRequestForm f) {
    try {
        b.signForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    tryToSignForm3(Bureaucrat b, PresidentialPardonForm f) {
    try {
        b.signForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    formExecuteBy1(Bureaucrat b, ShrubberyCreationForm f) {
    try {
        b.signForm(f);
        f.execute(b);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    formExecuteBy2(Bureaucrat b, RobotomyRequestForm f) {
    try {
        b.signForm(f);
        f.execute(b);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    formExecuteBy3(Bureaucrat b, PresidentialPardonForm f) {
    try {
        b.signForm(f);
        f.execute(b);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}; 

void    bureaucratExecuteForm1(Bureaucrat b, ShrubberyCreationForm f) {
    try {
        b.signForm(f);
        b.executeForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    bureaucratExecuteForm2(Bureaucrat b, RobotomyRequestForm f) {
    try {
        b.signForm(f);
        b.executeForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    bureaucratExecuteForm3(Bureaucrat b, PresidentialPardonForm f) {
    try {
        b.signForm(f);
        b.executeForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
};

int main(void)
{
    Bureaucrat                    Vitaliy("Vitaliy", 1);
    Bureaucrat                    Grisha("Grisha", 150);
    ShrubberyCreationForm         f1("Google form");
    RobotomyRequestForm           f2("UNIt form");
    PresidentialPardonForm        f3("LOL KEK CHEBUREK FORM");

    tryToSignForm1(Vitaliy, f1);
    tryToSignForm2(Vitaliy, f2);
    tryToSignForm3(Vitaliy, f3);

    tryToSignForm1(Grisha, f1);
    tryToSignForm2(Grisha, f2);
    tryToSignForm3(Grisha, f3);

    formExecuteBy1(Vitaliy, f1);
    formExecuteBy2(Vitaliy, f2);
    formExecuteBy3(Vitaliy, f3);

    formExecuteBy1(Grisha, f1);
    formExecuteBy2(Grisha, f2);
    formExecuteBy3(Grisha, f3);

    bureaucratExecuteForm1(Vitaliy, f1);
    bureaucratExecuteForm2(Vitaliy, f2);
    bureaucratExecuteForm3(Vitaliy, f3);

    bureaucratExecuteForm1(Grisha, f1);
    bureaucratExecuteForm2(Grisha, f2);
    bureaucratExecuteForm3(Grisha, f3);
    return (0);
}