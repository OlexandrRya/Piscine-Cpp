/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:47:50 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 15:15:06 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie {

	public:
		Zombie(std::string name, std::string type);
		~Zombie();

		void announce() const;
		std::string getName() const;
		std::string getType() const;

    private:
		std::string _name;
		std::string _type;
};
#endif
