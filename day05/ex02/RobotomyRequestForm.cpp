/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:52:46 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 15:49:22 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("none", "RobotomyRequestForm", 72, 45) {
    srand(time(NULL));
    return ;
};

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, "RobotomyRequestForm", 72, 45) {
    srand(time(NULL));
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj) {
    srand(time(NULL));
    return ;
};

RobotomyRequestForm::~RobotomyRequestForm(void) {
    return ;
};

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &) {
    return (*this);
};

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    if (rand() % 2) {
        std::cout << getTarget() << " has been robotomized successfully !" << std::endl;
    } else {
        std::cout << getTarget() << " robotomization failed!" << std::endl;
    }
};
