/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:25:21 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 13:27:57 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <string>

class Pony {
	private:
		std::string _name;
		std::string _color;

	public:
		Pony(std::string name, std::string color);
		~Pony();
		std::string getColor() const;
		std::string getName() const;
		void        say_hi() const;
};

#endif