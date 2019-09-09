/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:51:55 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 15:53:19 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {
        
	public:
	    ShrubberyCreationForm(void);
	    ShrubberyCreationForm(std::string target);
	    ShrubberyCreationForm(const ShrubberyCreationForm &obj);

	    ~ShrubberyCreationForm(void);

	    ShrubberyCreationForm   &operator = (const ShrubberyCreationForm &);

	    void	execute(const Bureaucrat &executor) const;
};

#endif
