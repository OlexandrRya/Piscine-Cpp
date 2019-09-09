/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:52:40 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/08 15:36:18 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <ctime>
# include <cstdlib>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {
        
	public:
	    RobotomyRequestForm(void);
	    RobotomyRequestForm(std::string target);
	    RobotomyRequestForm(const RobotomyRequestForm &obj);

	    ~RobotomyRequestForm(void);

	    RobotomyRequestForm     &operator = (const RobotomyRequestForm &);

	    void	execute(const Bureaucrat &executor) const;
};

#endif
