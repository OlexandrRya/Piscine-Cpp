/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:23:55 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 16:25:30 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <stdexcept>

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

    typedef Form* (Intern::*InternPtr)(std::string);

    private:
        Form*               _searchForm(std::string n, std::string t);
        Form*               _newPresidentialPardonForm(std::string target);
        Form*               _newRobotomyRequestForm(std::string target);
        Form*               _newShrubberyCreationForm(std::string target);

        InternPtr           _func[3];
        static std::string  _names[3];

    public:
        Intern(void);
        Intern(const Intern& obj);
        ~Intern(void);

        Intern       &operator = (const Intern&);
        Form         *makeForm(std::string name, std::string target);
};

#endif
