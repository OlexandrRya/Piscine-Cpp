/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:33:54 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 15:34:23 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {
        
	public:
	    PresidentialPardonForm(void);
	    PresidentialPardonForm(std::string target);
	    PresidentialPardonForm(const PresidentialPardonForm &obj);

	    ~PresidentialPardonForm(void);

	    PresidentialPardonForm  &operator = (const PresidentialPardonForm &);

	    void	execute(const Bureaucrat &executor) const;
};

#endif