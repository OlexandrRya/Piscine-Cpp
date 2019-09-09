/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:11:59 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 14:45:26 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string const    _name;
        bool                 _signed;
        int const            _minSignGrade;
        int const            _minExecGrade;

    public:
        Form(void);
        Form(std::string name, int grade_to_sign, int grade_to_execute);
        Form(const Form &src);
        ~Form(void);

        class GradeTooHighException : public std::exception {
            public:
                GradeTooHighException(void);
                GradeTooHighException(const GradeTooHighException &src);
                ~GradeTooHighException(void) throw();

                GradeTooHighException &operator = (const GradeTooHighException &);

                const char    *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                GradeTooLowException(void);
                GradeTooLowException(const GradeTooLowException &src);
                ~GradeTooLowException(void) throw();

                GradeTooLowException  &operator = (const GradeTooLowException &);

                const char    *what() const throw();
        };

        Form                      &operator = (const Form &src);

        std::string               getName(void) const;
        bool                      getSigned(void) const;
        int                       getGradeToSign(void) const;
        int                       getGradeToExecute(void) const;

        void                      beSigned(Bureaucrat &bureaucrat);
};

std::ostream                  &operator << (std::ostream &stream, Form const &);

#endif
