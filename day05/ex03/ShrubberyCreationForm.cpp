/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:51:59 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 16:08:02 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("none", "ShrubberyCreationForm", 145, 137) {
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, "ShrubberyCreationForm", 145, 137) {
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj) {
    return ;
};

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    return ;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &){
    return (*this);
};

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    std::ofstream  shrubberyFile;

    Form::execute(executor);
    shrubberyFile.open(getTarget() + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
    if (shrubberyFile.fail()) {
        std::cerr << "Error openning the outfile" << std::endl;
    }

    shrubberyFile << " █▓███████▓▓╬╬╬╬╬╬╬╬╬╬╬╬▓███▓▓▓▓█▓╬╬╬▓█" << std::endl;
    shrubberyFile << " ███████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓█" << std::endl;
    shrubberyFile << " ████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬█" << std::endl;
    shrubberyFile << " ███▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█" << std::endl;
    shrubberyFile << " ████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█" << std::endl;
    shrubberyFile << " ███▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓█" << std::endl;
    shrubberyFile << " ████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬█" << std::endl;
    shrubberyFile << " ███▓▓▓▓▓▓▓╬╬▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█" << std::endl;
    shrubberyFile << " ████▓▓▓╬╬╬╬▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█" << std::endl;
    shrubberyFile << " ███▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█" << std::endl;
    shrubberyFile << " █████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█" << std::endl;
    shrubberyFile << " █████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██" << std::endl;
    shrubberyFile << " █████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██" << std::endl;
    shrubberyFile << " ████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██" << std::endl;
    shrubberyFile << " ████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓██" << std::endl;
    shrubberyFile << " █████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓██" << std::endl;
    shrubberyFile << " █████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬███" << std::endl;
    shrubberyFile << " ██████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓███" << std::endl;
    shrubberyFile << " ███████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬████" << std::endl;
    shrubberyFile << " ███████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓████" << std::endl;
    shrubberyFile << " ████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█████" << std::endl;
    shrubberyFile << " █████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓██████" << std::endl;
    shrubberyFile << " ██████████▓▓▓█▓▓▓╬▓██╬╬╬╬╬╬╬╬╬╬╬▓███████" << std::endl;
    shrubberyFile << " ███████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓████████" << std::endl;
    shrubberyFile << " ██████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬██████████" << std::endl;

    shrubberyFile.close();
};
