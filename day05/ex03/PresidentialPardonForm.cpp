/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:33:57 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 15:49:17 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("none", "PresidentialPardonForm", 25, 5) {
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, "PresidentialPardonForm", 25, 5) {
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj) {
    return ;
};

PresidentialPardonForm::~PresidentialPardonForm(void) {
    return ;
};

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &) {
    return (*this);
};

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
};
