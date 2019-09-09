/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:45:42 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 13:57:48 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>

class ZombieEvent {
	private:
		std::string _type;

	public:
		ZombieEvent(std::string type);
		~ZombieEvent();

		std::string getZombieType() const;
		void setZombieType(std::string type);
		Zombie *newZombie(std::string name);
		Zombie *randomChump();
};

#endif