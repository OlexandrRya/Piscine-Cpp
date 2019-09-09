/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Bureaucrat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:27:24 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 14:46:52 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("unname"),  _grade(150) {
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()) {
    *this = src;
    return ;
}

Bureaucrat::~Bureaucrat(void) {
    return ;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &src) {
    if (this != &src) {
        this->_grade = src.getGrade();
    }
    return (*this);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {
    return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src) {
    *this = src;
    return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
    return ;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &) {
    return (*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("grade too low, minimal grade are 1");
}


Bureaucrat::GradeTooHighException::GradeTooHighException(void) {
    return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src) {
    *this = src;
    return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {
    return ;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &) {
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("grade too high, maximal grade are 150");
}


void        Bureaucrat::setGrade(int grade) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
      this->_grade = grade;
    }
    return ;
}

std::string     Bureaucrat::getName(void) const {
    return this->_name;
}

int     Bureaucrat::getGrade(void) const {
    return this->_grade;
}

void Bureaucrat::incrementGrade(void) {
    if (this->_grade <= 1) {
        throw Bureaucrat::GradeTooHighException();
    } else {
        this->_grade -= 1;
    }
    return ;
}

void Bureaucrat::decrementGrade(void) {
    if (this->_grade >= 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        this->_grade += 1;
    }
    return ;
}

std::ostream &operator<< (std::ostream &stream, const Bureaucrat &src) {
    stream << src.getName() 
        << ", bureaucrat grade " 
        << src.getGrade();
    return (stream);
}

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << this->_name 
            << " signs " 
            << form.getName() 
            << std::endl;
    }
    catch (std::exception& e) {
        std::cout << this->_name 
            << " cannot sign " 
            << form.getName() 
            << " because " 
            << e.what() 
            << std::endl;
    }
    return ;
};