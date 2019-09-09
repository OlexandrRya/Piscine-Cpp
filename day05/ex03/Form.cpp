/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:12:04 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 16:01:01 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _target("none"), _name("none"), _signed(false), _minSignGrade(1), _minExecGrade(1) {
    return ;
};

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _target("none"), _name(name), _signed(false), _minSignGrade(grade_to_sign), _minExecGrade(grade_to_execute) {
    if (this->_minSignGrade < 1 || this->_minExecGrade < 1) {
        throw Form::GradeTooHighException();
    } else if (this->_minSignGrade > 150 || this->_minExecGrade > 150) {
        throw Form::GradeTooLowException();
    }
    return ;
}

Form::Form(std::string target, std::string name, int grade_to_sign, int grade_to_execute) : _target(target), _name(name), _minSignGrade(grade_to_sign), _minExecGrade(grade_to_execute) {
    _signed = false;
    if (this->_minSignGrade < 1 || this->_minExecGrade < 1) {
        throw Form::GradeTooHighException();
    } else if (this->_minSignGrade > 150 || this->_minExecGrade > 150) {
        throw Form::GradeTooLowException();
    }
    return ;
}

Form::Form(const Form &src) : 
                        _target(src.getTarget()), 
                        _name(src.getName()), 
                        _signed(src.getSigned()), 
                        _minSignGrade(src.getGradeToSign()), 
                        _minExecGrade(src.getGradeToExecute()) {
    *this = src;
    return ;
};

Form::~Form(void) {
    return ;
};

Form &Form::operator= (const Form &src) {
    if (this != &src) {
        this->_target = src.getTarget();
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

std::string Form::getTarget(void) const {
    return (this->_target);
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

void     Form::setTarget(std::string target) {
    this->_target = target;
}

void     Form::setSigned(bool x_signed) {
    this->_signed = x_signed;
};


void Form::execute(Bureaucrat const & executor) const {
    if (!getSigned())
        throw Form::NotSignedException();
     else if (executor.getGrade() > _minExecGrade) {
        throw Form::GradeTooLowException();
    }
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

Form::NotSignedException::NotSignedException(void) {
    return ;
};

Form::NotSignedException::NotSignedException(const NotSignedException& obj) {
    *this = obj;
    return ;
};

Form::NotSignedException::~NotSignedException(void) throw() {
    return ;
};

Form::NotSignedException &Form::NotSignedException::operator= (const NotSignedException &) {
    return (*this);
};

const char* Form::NotSignedException::what(void) const throw() {
    return ("Form is not signed");
};