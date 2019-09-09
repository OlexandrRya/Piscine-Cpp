/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:12:04 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 14:42:01 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("none"), _signed(false), _minSignGrade(1), _minExecGrade(1) {
    return ;
};

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _name(name), _signed(false), _minSignGrade(grade_to_sign), _minExecGrade(grade_to_execute) {
    if (this->_minSignGrade < 1 || this->_minExecGrade < 1) {
        throw Form::GradeTooHighException();
    } else if (this->_minSignGrade > 150 || this->_minExecGrade > 150) {
        throw Form::GradeTooLowException();
    }
    return ;
};

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSigned()), _minSignGrade(src.getGradeToSign()), _minExecGrade(src.getGradeToExecute()) {
    *this = src;
    return ;
};

Form::~Form(void) {
    return ;
};

Form &Form::operator = (const Form &src) {
    if (this != &src) {
        this->_signed = src.getSigned();
    }
    return (*this);
};

Form::GradeTooHighException::GradeTooHighException(void) {
    return ;
};

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src) {
    *this = src;
    return ;
};

Form::GradeTooHighException::~GradeTooHighException(void) throw() {
    return ;
};

Form::GradeTooHighException &Form::GradeTooHighException::operator = (const GradeTooHighException &) {
    return (*this);
};

const char *Form::GradeTooHighException::what() const throw() {
    return ("grade is too high.");
};

Form::GradeTooLowException::GradeTooLowException(void) {
    return ;
};

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src) {
    *this = src;
    return ;
};

Form::GradeTooLowException::~GradeTooLowException(void) throw() {
    return ;
};

Form::GradeTooLowException &Form::GradeTooLowException::operator= (const GradeTooLowException &) {
    return (*this);
};

const char *Form::GradeTooLowException::what() const throw() {
    return ("grade is too low.");
};

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_minSignGrade) {
        throw Form::GradeTooLowException();
    } else {
        this->_signed = true;
    }
    return ;
};

bool Form::getSigned(void) const {
    return (this->_signed);
};

int Form::getGradeToSign(void) const {
    return (this->_minSignGrade);
};

int
Form::getGradeToExecute(void) const {
    return (this->_minExecGrade);
};

std::string Form::getName(void) const {
    return (this->_name);
};

std::ostream &operator << (std::ostream &stream, const Form &src) {
    stream << "Form " 
        << src.getName() 
        << " is " 
        << (src.getSigned() ? "" : "not ") 
        << "signed. It requires a grade " 
        << src.getGradeToSign() 
        << " to sign, and " 
        << src.getGradeToExecute() 
        << " to be executed.";
    return (stream);
}