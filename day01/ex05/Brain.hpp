/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:47:20 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 16:47:45 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>


class Brain {
    private:
		std::string _address;

	public:
		Brain();
		~Brain();

        std::string getAddress() const;
		std::string identify() const;
		void setAddress();
};

#endif