/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:27:26 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 12:26:02 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <iostream>

class Bureaucrat {
    private:
        std::string const   _name;
        int                 _grade;
    
    public:
        class   GradeTooHighException: public std::exception
        {
            public: 
                GradeTooHighException(void);
                ~GradeTooHighException(void) throw();
                GradeTooHighException(GradeTooHighException const &src);
                GradeTooHighException   &operator= (GradeTooHighException const &src);

                char const              *what() const throw();
        };

        class   GradeTooLowException: public std::exception
        {
            public:
                GradeTooLowException(void);
                GradeTooLowException(GradeTooLowException const &src);
                ~GradeTooLowException(void) throw();
                GradeTooLowException   &operator= (GradeTooLowException const &src);
    
                char const              *what() const throw();

        };
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat(void);
        
        Bureaucrat  &operator= (Bureaucrat const &src);

        void        setGrade(int grade);
        
        int         getGrade(void) const;
        std::string getName(void) const;

        void        decrementGrade(void);
        void        incrementGrade(void);

};

std::ostream &operator<< (std::ostream &, Bureaucrat const &);

#endif
