/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:27:18 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 16:31:42 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {

	public:
		Zombie();
		~Zombie();

		void announce() const;
		std::string getName() const;
		std::string getType() const;
		void setType(std::string type);
		void setName(std::string name);

    private:
		std::string _name;
		std::string _type;
};
#endif
